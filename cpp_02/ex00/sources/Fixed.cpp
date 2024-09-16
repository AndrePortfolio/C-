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
	std::cout << "Copy constructor called" << std::endl;

	*this = copy;
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
	std::cout << "setRawBits member function called" << std::endl;

	this->value = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;

	return (this->value);
}
