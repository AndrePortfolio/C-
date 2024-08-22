/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:32:24 by andre-da          #+#    #+#             */
/*   Updated: 2024/08/19 16:24:36 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongDog.hpp"

/*----------------------------------------------------------------------------*/
/*------------------------- Constructors & Destructor -----------------------*/
/*----------------------------------------------------------------------------*/

WrongDog::WrongDog()
{
	type = "WrongDog";
	std::cout << "WrongDog Default Constructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog &copy)
{
	*this = copy;

	std::cout << "WrongDog Copy Constructor called" << std::endl;
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
	if (this != &other) {
		this->type = other.type;
	}
	std::cout << "WrongDog Copy Assignment Operator called" << std::endl;
	return (*this);
}

/*----------------------------------------------------------------------------*/
/*------------------------------ Member Functions ----------------------------*/
/*----------------------------------------------------------------------------*/

void	WrongDog::makeSound() const
{
	std::cout << "Wuffffff Wuffffff" << std::endl;
}
