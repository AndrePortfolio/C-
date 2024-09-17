/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:32:24 by andre-da          #+#    #+#             */
/*   Updated: 2024/08/19 16:36:18 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*----------------------------------------------------------------------------*/
/*------------------------- Constructors & Destructor -----------------------*/
/*----------------------------------------------------------------------------*/

Dog::Dog() : Animal(), brain(new Brain())
{
	std::cout << "Dog Default Constructor called" << std::endl;

	type = "dog";
}

Dog::Dog(const Dog &copy) : Animal(copy), brain(new Brain(*copy.brain))
{
	std::cout << "Dog Copy Constructor called" << std::endl;

	this->type = copy.type;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;

	delete (this->brain);
}

/*----------------------------------------------------------------------------*/
/*--------------------------------- Operator ---------------------------------*/
/*----------------------------------------------------------------------------*/

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog Copy Assignment Operator called" << std::endl;

	if (this != &other)
	{
		this->type = other.type;
		delete (this->brain);
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

/*----------------------------------------------------------------------------*/
/*------------------------------ Member Functions ----------------------------*/
/*----------------------------------------------------------------------------*/

void	Dog::makeSound() const
{
	std::cout << "Wuffffff Wuffffff" << std::endl;
}

Brain*	Dog::getBrain() const
{
	return (brain);
}
