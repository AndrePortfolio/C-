/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:39:49 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/07/16 12:42:53 by andrealbuqu      ###   ########.fr       */
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

Fixed::Fixed(const int num)										// Int Contructor
{
	std::cout << "Int constructor called" << std::endl;

	this->value = num << bits;
}

Fixed::Fixed(const float num)									// Float Contructor
{
	std::cout << "Float constructor called" << std::endl;

	this->value = roundf(num * (1 << bits));
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

std::ostream &operator<<(std::ostream &out, const Fixed &obj)	// Insertion Operator
{
	out << obj.toFloat();

	return (out);
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

int Fixed::toInt(void) const
{
	return ((this->value) >> bits);
}

float Fixed::toFloat(void) const
{
	return ((float)(this->value) / (1 << bits));
}