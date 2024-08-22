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

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongDog.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	const int arraySize = 4; // Example size
	Animal* animals[arraySize];

	// Create half Dog and half Cat
	for (int i = 0; i < arraySize / 2; i++)
		animals[i] = new Dog();

	for (int i = arraySize / 2; i < arraySize; i++)
		animals[i] = new Cat();

	// Clean up
	for (int i = 0; i < arraySize; i++)
		delete (animals[i]);

	// Test deep copy
	Dog basic;
	Dog tmp = basic;
	return (0);
}
