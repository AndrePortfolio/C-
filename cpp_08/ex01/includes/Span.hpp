/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre-da <andre-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:27:31 by andre-da          #+#    #+#             */
/*   Updated: 2024/09/27 10:34:54 by andre-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include "headers.hpp"

class Span
{
	private:
		unsigned int		maxSize;
		std::vector<int>	numbers;

		Span();

	public:
		Span(unsigned int N);
		Span(const Span &copy);
		Span& operator=(const Span &other);
		~Span();

		void	fillContainer();
		void	addNumber(int number);
		void	prepareSpan();
		size_t	shortestSpan();
		size_t	longestSpan();
};

typedef std::vector<int>::iterator	Iterator;

#endif
