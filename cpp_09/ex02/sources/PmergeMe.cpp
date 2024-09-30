/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:19:02 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/09/30 12:52:37 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/headers.hpp"

/*----------------------------------------------------------------------------*/
/*-------------------------- Constructors & Destructor -----------------------*/
/*----------------------------------------------------------------------------*/

PmergeMe::PmergeMe() : vec(), lst() , vectorSpeed(0), listSpeed(0) {}

PmergeMe::PmergeMe(int argc, char* argv[]) : vec(), lst() , vectorSpeed(0), listSpeed(0)
{
	checkInput(argc, argv);
	printState("Before: ");
	sort();
	printState("After:  ");
	printSpeeds();
}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
	*this = copy;
}

PmergeMe::~PmergeMe() {}

/*----------------------------------------------------------------------------*/
/*--------------------------------- Operator ---------------------------------*/
/*----------------------------------------------------------------------------*/

PmergeMe&	PmergeMe::operator=(const PmergeMe &other)
{
	if (this != &other)
	{
		this->vec = other.vec;
		this->lst = other.lst;
	}
	return (*this);
}

/*----------------------------------------------------------------------------*/
/*------------------------------ Member Functions ----------------------------*/
/*----------------------------------------------------------------------------*/

void	PmergeMe::checkInput(int argc, char* argv[])
{
	if (argc < 2)
		throw std::invalid_argument("Usage: ./RPN <integerSequence>");

	for (int i = 1; i < argc; i++)
	{
		float value = std::atof(argv[i]);

		if (value <= 0)
			throw std::out_of_range("Error: input must be a positive integer");
		if (value > std::numeric_limits<int>::max())
			throw std::out_of_range("Error: input is too large");
		lst.push_back(static_cast<int>(value));
		vec.push_back(static_cast<int>(value));
	}
}

void	PmergeMe::sort()
{
	int size;

	if (vec.size() != lst.size())
		throw std::runtime_error("Error: parsing input");
	else
		size = vec.size();

	if (size > 1)
	{
		std::clock_t start;
		std::clock_t end;

		start = std::clock();
		vMergeInsertionSort();
		end = std::clock();
		vectorSpeed = (static_cast<double>(end - start) / CLOCKS_PER_SEC) * 1e6;

		start = std::clock();
		lMergeInsertionSort();
		end = std::clock();
		listSpeed = (static_cast<double>(end - start) / CLOCKS_PER_SEC) * 1e6;
	}
}

static vIterator vNext(vIterator it)
{
	return (++it);
}

static vIterator vPrev(vIterator it)
{
	return (--it);
}

static lIterator lNext(lIterator it)
{
	return (++it);
}

static lIterator lPrev(lIterator it)
{
	return (--it);
}

static lIterator lNextX(lIterator it, int dist)
{
	std::advance(it, dist);
	return (it);
}

void	PmergeMe::printState(const std::string& state) const
{
	std::cout << state;
	for (vConstIterator it = vec.begin(); it != vec.end(); ++it)
		std::cout << *it << " ";
	std::cout << "\n" << state;
	for (lConstIterator it = lst.begin(); it != lst.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	PmergeMe::printSpeeds() const
{
	std::cout	<< "Time to process a range of " << vec.size()
					<< " elements with std::vector: "
					<< vectorSpeed << " us" << std::endl;
	std::cout	<< "Time to process a range of " << lst.size()
					<< " elements with std::list:   "
					<< listSpeed << " us" << std::endl;
}

/*----------------------------------------------------------------------------*/
/*------------------------------ Vector Container ----------------------------*/
/*----------------------------------------------------------------------------*/

void	PmergeMe::vMergeInsertionSort()
{
	vect		chainA;
	vect		chainB;
	vect		sorted;
	vIterator	it = vec.begin();

	// Step 1: Pair elements from vec into chainA and chainB
	while (it != vPrev(vec.end()) && it != vec.end())
	{
		if (*it < *vNext(it))
		{
			chainA.push_back(*it);
			chainB.push_back(*vNext(it));
		}
		else
		{
			chainB.push_back(*it);
			chainA.push_back(*vNext(it));
		}
		it += 2;
	}	
	if (it == vPrev(vec.end()))
		chainB.push_back(*it);

	// Step 2: Recursively sort the larger elements (chainB)
	vMergeInsert(0, chainB.size() - 1);

	// Step 3: Add the first (smallest) element from sorted chainB to 'sorted'
	sorted.push_back(chainB.front());
	chainB.erase(chainB.begin());

	// Step 4: Insert elements from chainA into 'sorted' using binary search
	for (vConstIterator it = chainA.begin(); it != chainA.end(); ++it)
	{
        vIterator pos = std::lower_bound(sorted.begin(), sorted.end(), *it);
        sorted.insert(pos, *it);
    }

    // Step 5: Insert the remaining elements from chainB into 'sorted'
    for (vConstIterator it = chainB.begin(); it != chainB.end(); ++it)
	{
        vIterator pos = std::lower_bound(sorted.begin(), sorted.end(), *it);
        sorted.insert(pos, *it);
    }
	vec = sorted;
}

void	PmergeMe::vMergeInsert(int start, int end)
{
	if (start == end)
		return ;

	int mid = start + (end - start) / 2;

	vMergeInsert(start, mid);
	vMergeInsert(mid + 1, end);
	vMerge(start, mid, end);
}

void	PmergeMe::vMerge(int start, int mid, int end)
{
	std::vector<int> left(vec.begin() + start, vec.begin() + mid + 1);
	std::vector<int> right(vec.begin() + mid + 1, vec.begin() + end + 1);

	size_t l = 0, r = 0, v = start;

	while (l < left.size() && r < right.size())
	{
		if (left[l] <= right[r])
			vec[v++] = left[l++];
		else
			vec[v++] = right[r++];
	}
	while (l < left.size())
		vec[v++] = left[l++];
	while (r < right.size())
		vec[v++] = right[r++];
}

/*----------------------------------------------------------------------------*/
/*------------------------------- List Container -----------------------------*/
/*----------------------------------------------------------------------------*/

void	PmergeMe::lMergeInsertionSort()
{
	list		chainA;
	list		chainB;
	list		sorted;
	lIterator	it = lst.begin();

	// Step 1: Pair elements from lst into chainA and chainB
	while (it != lPrev(lst.end()) && it != lst.end())
	{
		if (*it < *lNext(it))
		{
			chainA.push_back(*it);
			chainB.push_back(*lNext(it));
		}
		else
		{
			chainB.push_back(*it);
			chainA.push_back(*lNext(it));
		}
		std::advance(it, 2);
	}	
	if (it == lPrev(lst.end()))
		chainB.push_back(*it);

	// Step 2: Recursively sort the larger elements (chainB)
	lMergeInsert(0, chainB.size() - 1);

	// Step 3: Add the first (smallest) element from sorted chainB to 'sorted'
	sorted.push_back(chainB.front());
	chainB.erase(chainB.begin());

	// Step 4: Insert elements from chainA into 'sorted' using binary search
	for (lConstIterator it = chainA.begin(); it != chainA.end(); ++it)
	{
        lIterator pos = std::lower_bound(sorted.begin(), sorted.end(), *it);
        sorted.insert(pos, *it);
    }

    // Step 5: Insert the remaining elements from chainB into 'sorted'
    for (lConstIterator it = chainB.begin(); it != chainB.end(); ++it)
	{
        lIterator pos = std::lower_bound(sorted.begin(), sorted.end(), *it);
        sorted.insert(pos, *it);
    }
	lst = sorted;
}

void	PmergeMe::lMergeInsert(int start, int end)
{
	if (start == end)
		return ;

	int mid = start + (end - start) / 2;

	lMergeInsert(start, mid);
	lMergeInsert(mid + 1, end);
	lMerge(start, mid, end);
}

void	PmergeMe::lMerge(int start, int mid, int end)
{
	list		merged;
	lIterator	itLeft = lNextX(lst.begin(), start);
	lIterator	itRight = lNextX(lst.begin(), mid + 1);
	lIterator	endLeft = lNextX(lst.begin(), mid + 1);
	lIterator	endRight = lNextX(lst.begin(), end + 1);

	while (itLeft != endLeft && itRight != endRight)
	{
		if (*itLeft <= *itRight)
		{
			merged.push_back(*itLeft);
			itLeft++;
		}
		else
		{
			merged.push_back(*itRight);
			itRight++;
		}
	}
	while (itLeft != endLeft)
	{
		merged.push_back(*itLeft);
		itLeft++;
	}
	while (itRight != endRight)
	{
		merged.push_back(*itRight);
		itRight++;
	}
	lIterator	it = lNextX(lst.begin(), start);

	it = lst.erase(it, lNextX(it, end - start + 1));
	lst.insert(lst.end(), merged.begin(), merged.end());
}