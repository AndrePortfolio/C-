/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:32:24 by andre-da          #+#    #+#             */
/*   Updated: 2024/08/19 16:17:28 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*----------------------------------------------------------------------------*/
/*------------------------- Contructors & Destructor -------------------------*/
/*----------------------------------------------------------------------------*/

AAnimal::AAnimal() : type("animal")							// Default Contructor
{
	std::cout << "Animal Default Contructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)							// Copy Contructor
{
	*this = copy;

	std::cout << "Animal Copy contructor called" << std::endl;
}

AAnimal::~AAnimal(void)												// Destructor
{
	std::cout << "Animal Destructor has been called" << std::endl;
}

/*----------------------------------------------------------------------------*/
/*--------------------------------- Operator ---------------------------------*/
/*----------------------------------------------------------------------------*/

AAnimal	&AAnimal::operator=(const AAnimal &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "Animal Copy Assignment operator  called" << std::endl;
	return (*this);
}

/*----------------------------------------------------------------------------*/
/*----------------------------- Member Functions -----------------------------*/
/*----------------------------------------------------------------------------*/

void	AAnimal::makeSound() const
{
	std::cout << "??????? ???????" << std::endl;
}

std::string	AAnimal::getType() const
{
	return (this->type);
}
