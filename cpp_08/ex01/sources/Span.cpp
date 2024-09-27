/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre-da <andre-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:32:24 by andre-da          #+#    #+#             */
/*   Updated: 2024/09/27 10:46:51 by andre-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/headers.hpp"

/*----------------------------------------------------------------------------*/
/*------------------------- Constructors & Destructor ------------------------*/
/*----------------------------------------------------------------------------*/

Span::Span(){}

Span::Span(unsigned int N) : maxSize(N)
{
	if (N == 0 || static_cast<int>(N) < 0)
        throw std::out_of_range("Error: Not a positive number");
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span::~Span(){}

/*----------------------------------------------------------------------------*/
/*--------------------------------- Operator ---------------------------------*/
/*----------------------------------------------------------------------------*/

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		this->maxSize = other.maxSize;
		this->numbers = other.numbers;
	}
	return (*this);
}

/*----------------------------------------------------------------------------*/
/*------------------------------ Member Functions ----------------------------*/
/*----------------------------------------------------------------------------*/

void	Span::fillContainer()
{
	if (numbers.size() >= maxSize)
		throw std::runtime_error("Container is already full");
	else
	{
		std::srand(static_cast<unsigned int>(time(0)));

		while (numbers.size() < maxSize)
		{
			int randomNumber = (std::rand() % 1000) + 1;
			addNumber(randomNumber);
		}
	}

	std::sort(numbers.begin(), numbers.end());
	std::cout << GREEN << "CONTAINER -> " << RESET;

	for (Iterator it = numbers.begin(); it != numbers.end(); ++it)
		std::cout << *it << " ";

	std::cout << std::endl;
}

void	Span::addNumber(int number)
{
	if (numbers.size() < maxSize)
		numbers.push_back(number);
	else
		throw std::runtime_error("Can't add any more numbers");
}

void	Span::prepareSpan()
{
	if (numbers.size() <= 1)
		throw std::runtime_error("Not enought numbers");
	std::sort(numbers.begin(), numbers.end());
}

static Iterator	next(Iterator it)
{
    return (++it);
}

static Iterator prev(Iterator it)
{
    return (--it);
}

size_t	Span::shortestSpan()
{
	prepareSpan();

	size_t	shortSpan = std::numeric_limits<size_t>::max();
	int		i = 0, index = 0;

	for (Iterator it = numbers.begin(); it != prev(numbers.end()); ++it)
	{
		size_t	diff = *next(it) - *it;
		if (diff < shortSpan)
		{
			shortSpan = diff;
			index = i;
		}
		i++;
	}
	std::cout << index << " <-> " << index + 1 << CYAN <<  " diff: " << RESET;
	return (shortSpan);
}

size_t	Span::longestSpan()
{
	prepareSpan();

	return (numbers.back() - numbers.front());
}
