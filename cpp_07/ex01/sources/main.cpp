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

#include "../includes/libft.h"

int main(void)
{
	std::cout << GREEN << "\nINT ARRAY\n" << RESET;

	int	array[10] = {0, 1, 2, 3, 4 ,5 ,6 ,7 ,8 ,9};
	for (size_t i = 0; i < 10; i++)
	{
		if (array[i] != '\0')		
			std::cout << array[i] << " ";
	}
	std::cout << GREEN << "\nAPPLY ITER\n" << RESET;
	iter(array, 10, print);

	std::cout << CYAN << "\n\nCHAR ARRAY\n" << RESET;

	char	cArray[4] = {'a', 'b', 'c', 'd'};
	for (size_t i = 0; i < 4; i++)
	{
		if (cArray[i] != '\0')
			std::cout << cArray[i] << " ";
	}

	std::cout << CYAN << "\nAPPLY ITER\n" << RESET;

	iter(cArray, 4, print);

	std::cout << "\n" << std::endl;
	return (0);
}
