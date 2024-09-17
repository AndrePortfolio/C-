/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:32:24 by andre-da          #+#    #+#             */
/*   Updated: 2024/08/19 15:53:03 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int main()
{
	const	Animal* animal = new Animal();
	std::cout << "\n";

	const	Animal* dog = new Dog();
	std::cout << "\n";

	const	Animal* cat = new Cat();
	std::cout << "\n";

	std::cout << CYAN << dog->getType() << "    -> ";
	dog->makeSound(); //will output the dog sound!
	std::cout << GREEN << cat->getType() << "    -> ";
	cat->makeSound(); //will output the cat sound!
	std::cout << YELLOW << animal->getType() << " -> ";
	animal->makeSound();

	std::cout << RESET << "\n";
	delete (animal);
	std::cout << "\n";
	delete (dog);
	std::cout << "\n";
	delete (cat);

	std::cout << std::endl << RED
		<< "Now the same with the Wrong classes\n"
		<< RESET << std::endl;

	const	WrongAnimal* wrongAnimal = new WrongAnimal();
	std::cout << "\n";
	const	WrongAnimal* wrongCat = new WrongCat();
	std::cout << "\n";

	std::cout << GREEN << wrongCat->getType() << "    -> ";
	wrongCat->makeSound(); //will output the cat sound!
	std::cout << YELLOW << wrongAnimal->getType() << " -> ";
	wrongAnimal->makeSound();

	std::cout << RESET << "\n";
	delete (wrongAnimal);
	std::cout << std::endl;
	delete (wrongCat);
	return (0);
}
