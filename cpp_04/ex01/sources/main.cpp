/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:32:24 by andre-da          #+#    #+#             */
/*   Updated: 2024/08/19 16:47:14 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int main()
{
	const int arraySize = 4;

	Animal* animals[arraySize];

	std::cout << GREEN << "DOG CONSTRUCTORS\n" << RESET;

	for (int i = 0; i < arraySize / 2; i++)
	{
		animals[i] = new Dog();
		std::cout << "\n";
	}

	std::cout << GREEN << "CAT CONSTRUCTORS\n" << RESET;

	for (int i = arraySize / 2; i < arraySize; i++)
	{
		animals[i] = new Cat();
		std::cout << "\n";
	}

	std::cout << RED << "DESTRUCTORS\n" << RESET;

	for (int i = 0; i < arraySize; i++)
	{
		delete (animals[i]);
		std::cout << "\n";
	}

	std::cout << CYAN << "TEST DEEP COPY\n" << RESET;

	Dog dog;
	std::cout << "\n";

	dog.getBrain()->setIdea(0, "I bark like crazy");

	Dog tmp = dog;
	std::cout << "\n";

	std::cout << "dog -> " << dog.getBrain()->getIdea(0) << "\n";
	std::cout << "tmp -> "  << tmp.getBrain()->getIdea(0) << "\n";
	tmp.getBrain()->setIdea(0, "I can't bark");
	std::cout << "dog -> "  << dog.getBrain()->getIdea(0) << "\n";
	std::cout << "tmp -> "  << tmp.getBrain()->getIdea(0) << "\n";

	std::cout << RED << "\nDESTRUCTORS\n" << RESET;
	return (0);
}
