/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:39:49 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/09/12 10:41:49 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

/*----------------------------------------------------------------------------*/
/*------------------------- Contructors & Destructor -------------------------*/
/*----------------------------------------------------------------------------*/

Fixed::Fixed() : value(0)									// Default Contructor
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)									// Copy Contructor
{
	*this = copy;

	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()														// Destructor
{
	std::cout << "Destructor called" << std::endl;
}
/*----------------------------------------------------------------------------*/
/*--------------------------------- Operator ---------------------------------*/
/*----------------------------------------------------------------------------*/

Fixed &Fixed::operator=(const Fixed &other)			// Copy Assignment Operator
{
	std::cout << "Copy assignment operator called" << std::endl;

	this->value = other.getRawBits();
	return (*this);
}
/*----------------------------------------------------------------------------*/
/*----------------------------- Member Functions -----------------------------*/
/*----------------------------------------------------------------------------*/

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

int Fixed::getRawBits(void) const
{
	return (this->value);
}
