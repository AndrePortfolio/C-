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
#include "../includes/WrongDog.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	const	Animal* meta = new Animal();
	const	Animal* j = new Dog();
	const	Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	meta->makeSound();

	delete (meta);
	delete (j);
	delete (i);

	std::cout << std::endl << RED
		<< "Now the same with the Wrong classes\n"
		<< RESET << std::endl;

	const	WrongAnimal* wrongMeta = new WrongAnimal();
	const	WrongAnimal* wrongJ = new WrongDog();
	const	WrongAnimal* wrongI = new WrongCat();

	std::cout << wrongJ->getType() << " " << std::endl;
	std::cout << wrongI->getType() << " " << std::endl;
	wrongI->makeSound(); //will not output the cat sound!
	wrongJ->makeSound(); //will not output the dog sound!
	wrongMeta->makeSound();

	delete (wrongMeta);
	delete (wrongJ);
	delete (wrongI);
	return (0);
}
