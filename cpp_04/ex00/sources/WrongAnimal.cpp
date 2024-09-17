/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:32:24 by andre-da          #+#    #+#             */
/*   Updated: 2024/08/19 15:41:34 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*----------------------------------------------------------------------------*/
/*------------------------- Contructors & Destructor -------------------------*/
/*----------------------------------------------------------------------------*/

WrongAnimal::WrongAnimal() : type("WrongAnimal")	// Default Contructor
{
	std::cout << "WrongAnimal Default Contructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)					// Copy Contructor
{
	std::cout << "WrongAnimal Copy contructor called" << std::endl;

	this->type = copy.type;
}

WrongAnimal::~WrongAnimal(void)										// Destructor
{
	std::cout << "WrongAnimal Destructor has been called" << std::endl;
}

/*----------------------------------------------------------------------------*/
/*--------------------------------- Operator ---------------------------------*/
/*----------------------------------------------------------------------------*/

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal Copy Assignment operator  called" << std::endl;
	
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

/*----------------------------------------------------------------------------*/
/*----------------------------- Member Functions -----------------------------*/
/*----------------------------------------------------------------------------*/

void	WrongAnimal::makeSound() const
{
	std::cout << "???????? ????????" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}
