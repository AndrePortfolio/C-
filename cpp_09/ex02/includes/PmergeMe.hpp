/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:32:24 by andre-da          #+#    #+#             */
/*   Updated: 2024/10/01 14:04:47 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include "headers.hpp"

typedef	std::vector<int>::const_iterator	vConstIterator;
typedef	std::vector<int>::iterator			vIterator;
typedef	std::list<int>::const_iterator		lConstIterator;
typedef	std::list<int>::iterator			lIterator;
typedef	std::vector<int>					vect;
typedef	std::list<int>						list;

class PmergeMe
{
	private:
		vect	vec;
		list	lst;
		double	vectorSpeed;
		double	listSpeed;
		double	vDataTime;
		double	lDataTime;

		PmergeMe();
		PmergeMe(const PmergeMe &copy);
		PmergeMe&	operator=(const PmergeMe &other);

		void	checkInput(int argc, char* argv[]);
		void	sort();
		void	printState(const std::string& state) const;
		void	printSpeeds() const;

		// vector container
		void	vMergeInsertionSort();
		void	vPairElements(vect &chainA, vect &chainB);
		void	vMergeInsert(int start, int end, vect& chainB);
		void	vMerge(int start, int mid, int end, vect& chainB);
		void	vInsertRemainingElements(vect &sorted, const vect &chainA, const vect &chainB);

		// list container
		void	lMergeInsertionSort();
		void	lPairElements(list &chainA, list &chainB);
		void	lMergeInsert(int start, int end, list& chainB);
		void	lMerge(int start, int mid, int end, list& chainB);
		void	lInsertRemainingElements(list &sorted, const list &chainA, const list &chainB);

	public:
		PmergeMe(int argc, char* argv[]);
		~PmergeMe();
};

#endif
