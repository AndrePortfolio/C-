/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:32:24 by andre-da          #+#    #+#             */
/*   Updated: 2024/08/19 15:36:29 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongDog.hpp"

/*----------------------------------------------------------------------------*/
/*------------------------- Constructors & Destructor -----------------------*/
/*----------------------------------------------------------------------------*/

WrongDog::WrongDog()
{
	std::cout << "WrongDog Default Constructor called" << std::endl;

	type = "WrongDog";
}

WrongDog::WrongDog(const WrongDog &copy)
{
	std::cout << "WrongDog Copy Constructor called" << std::endl;

	this->type = copy.type;
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog Destructor called" << std::endl;
}

/*----------------------------------------------------------------------------*/
/*--------------------------------- Operator ---------------------------------*/
/*----------------------------------------------------------------------------*/

WrongDog &WrongDog::operator=(const WrongDog &other)
{
	std::cout << "WrongDog Copy Assignment Operator called" << std::endl;

	if (this != &other) {
		this->type = other.type;
	}
	return (*this);
}

/*----------------------------------------------------------------------------*/
/*------------------------------ Member Functions ----------------------------*/
/*----------------------------------------------------------------------------*/

void	WrongDog::makeSound() const
{
	std::cout << "Wuffffff Wuffffff" << std::endl;
}
