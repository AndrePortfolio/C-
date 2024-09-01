/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:32:24 by andre-da          #+#    #+#             */
/*   Updated: 2024/08/24 14:48:19 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

void	printInt(int& element, size_t index)
{
	if (element != '\0')
	{
		if (index != 9)
			std::cout << element << ", ";
		else
			std::cout << element << "\n";
	}
}

void	printDouble(double& element, size_t index)
{
	if (element != '\0')
	{
		if (index != 9)
			std::cout << element << ", ";
		else
			std::cout << element << "\n";
	}
}

void	printChar(char& element, size_t index)
{
	if (element != '\0')
	{
		if (index < 3)
			std::cout << element << ", ";
		else
			std::cout << element << "\n\n";
	}
}

int main(void)
{
	int	array[10] = {0, 1, 2, 3, 4 ,5 ,6 ,7 ,8 ,9};

	std::cout << CYAN << "\nDISPLAY ARRAY:  " << RESET;

	for (size_t i = 0; i < 10; i++)
	{
		if (array[i] != '\0')
		{
			if (i != 9)
				std::cout << array[i] << ", ";
			else
				std::cout << array[i] << "\n";
		}
	}

	std::cout << GREEN << "\nFUNCTION ARRAY: " << RESET;

	iter(array, 10, printInt);

	char	cArray[5] = {'a', 'b', 'c', 'd', '\0'};

	std::cout << CYAN << "\nDISPLAY ARRAY:  " << RESET;

	for (size_t i = 0; i < 5; i++)
	{
		if (cArray[i] != '\0')
		{
			if (i < 3)
				std::cout << cArray[i] << ", ";
			else
				std::cout << cArray[i] << "\n";
		}
	}

	std::cout << GREEN << "\nFUNCTION ARRAY: " << RESET;

	iter(cArray, 5, printChar);

	return (0);
}
