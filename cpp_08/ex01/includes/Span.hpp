/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre-da <andre-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:27:31 by andre-da          #+#    #+#             */
/*   Updated: 2024/09/21 18:36:55 by andre-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include "headers.h"

class Span
{
	private:
        int* integers;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span &copy);
		Span& operator=(const Span &other);
		~Span();

        void    addNumber(int number);
        void    shortestSpan();
        void    longestSpan();
};

#endif