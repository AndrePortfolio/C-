/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:32:24 by andre-da          #+#    #+#             */
/*   Updated: 2024/08/23 11:08:44 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

/*----------------------------------------------------------------------------*/
/*------------------------- Constructors & Destructor -----------------------*/
/*----------------------------------------------------------------------------*/

Serializer::Serializer()
{
	std::cout << "Default Constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &copy)
{
	*this = copy;

	std::cout << "Copy Constructor called" << std::endl;
}

Serializer::~Serializer()
{
	std::cout << "Destructor called" << std::endl;
}

/*----------------------------------------------------------------------------*/
/*--------------------------------- Operator ---------------------------------*/
/*----------------------------------------------------------------------------*/

Serializer &Serializer::operator=(const Serializer &other)
{
	if (this != &other)
	{
		*this = other;
	}
	std::cout << "Copy Assignment Operator called" << std::endl;
	return *this;
}

/*----------------------------------------------------------------------------*/
/*------------------------------ Member Functions ----------------------------*/
/*----------------------------------------------------------------------------*/

uintptr_t	Serializer::serialize(Data *ptr)
{
	
}

Data*	Serializer::deserialize(uintptr_t raw)
{

}
