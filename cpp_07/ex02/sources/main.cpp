/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:32:24 by andre-da          #+#    #+#             */
/*   Updated: 2024/08/25 12:14:54 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

int	main(void)
{
	// Test default constructor
	Array<int> emptyArray;
	std::cout << "Empty array size: " << emptyArray.size() << std::endl;
	// Test constructor with size parameter
	Array<int> arrayWithSize(5);
	std::cout << "Array with size 5: " << arrayWithSize.size() << std::endl;
	// Test element access and assignment
	for (unsigned int i = 0; i < arrayWithSize.size(); ++i)
	{
		arrayWithSize[i] = i * 2; // Assigning values
	}
	std::cout << "Array elements after assignment: ";
	for (unsigned int i = 0; i < arrayWithSize.size(); ++i)
	{
		std::cout << arrayWithSize[i] << " ";
	}
	std::cout << std::endl;
	// Test copy constructor
	Array<int> copiedArray(arrayWithSize);
	std::cout << "Copied array elements: ";
	for (unsigned int i = 0; i < copiedArray.size(); ++i)
	{
		std::cout << copiedArray[i] << " ";
	}
	std::cout << std::endl;
	// Modify the original array and show that the copied array is unaffected
	arrayWithSize[0] = 100;
	std::cout << "Modified original array: " << arrayWithSize[0] << std::endl;
	std::cout << "Copied array after original modified: " << copiedArray[0] << std::endl;
	// Test assignment operator
	Array<int> assignedArray;
	assignedArray = arrayWithSize;
	std::cout << "Assigned array elements: ";
	for (unsigned int i = 0; i < assignedArray.size(); ++i)
	{
		std::cout << assignedArray[i] << " ";
	}
	std::cout << std::endl;
	// Test out-of-bounds access
	try
	{
		arrayWithSize[10];
	}
	catch (const std::out_of_range &e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}
	Array<char> charArray(10);
	std::cout << "Char array size: " << charArray.size() << "\n";
	std::cout << "Char array elements: ";
	for (size_t i = 0; i < 10; i++)
	{
		charArray[i] = 'a' + i;
		std::cout << charArray[i] << " ";
	}
	std::cout << std::endl;
	return (0);
}
