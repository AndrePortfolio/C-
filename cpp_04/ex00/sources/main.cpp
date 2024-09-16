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

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	const	Animal* meta = new Animal();
	std::cout << "\n";

	const	Animal* j = new Dog();
	std::cout << "\n";

	const	Animal* i = new Cat();
	std::cout << "\n";

	std::cout << CYAN << j->getType() << " " << std::endl;
	j->makeSound(); //will output the dog sound!
	std::cout << GREEN << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!

	std::cout << YELLOW;
	meta->makeSound();

	std::cout << RESET << "\n";
	delete (meta);
	std::cout << "\n";
	delete (j);
	std::cout << "\n";
	delete (i);

	std::cout << std::endl << RED
		<< "Now the same with the Wrong classes\n"
		<< RESET << std::endl;

	const	WrongAnimal* wrongMeta = new WrongAnimal();
	std::cout << "\n";
	const	WrongAnimal* wrongI = new WrongCat();
	std::cout << "\n";

	std::cout << GREEN << wrongI->getType() << " " << std::endl;
	wrongI->makeSound(); //will not output the cat sound!
	std::cout << YELLOW;
	wrongMeta->makeSound();

	std::cout << RESET << "\n";
	delete (wrongMeta);
	std::cout << std::endl;
	delete (wrongI);
	return (0);
}
