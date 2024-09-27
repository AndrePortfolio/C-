/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre-da <andre-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:27:25 by andre-da          #+#    #+#             */
/*   Updated: 2024/09/27 11:25:21 by andre-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/headers.hpp"

static void	errorMessage(std::string message)
{
	std::cerr << RED << message << RESET << std::endl;
}

int main(int argc, char *argv[])
{
    (void)argv;
	if (argc != 1)
		return (errorMessage("Usage: ./span"), 1);
	try
	{
		Span numbers = Span(20);	// test different values (increase nbr distribution for 10k+)
		
		numbers.fillContainer();
		// numbers.addNumber(1);
		std::cout << CYAN <<  "\nShortest span: " << RESET <<  numbers.shortestSpan() << std::endl;
		std::cout << CYAN <<  "Longest  span: " << RESET << numbers.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	// SIMPLE MAIN FROM SUBJECT
	// try
	// {
	// 	Span sp = Span(5);
	// 	sp.addNumber(6);
	// 	sp.addNumber(3);
	// 	sp.addNumber(17);
	// 	sp.addNumber(9);
	// 	sp.addNumber(11);
	// 	std::cout << sp.shortestSpan() << std::endl;
	// 	std::cout << sp.longestSpan() << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	return (0);
}
