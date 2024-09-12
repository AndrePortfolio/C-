/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:31:29 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/09/12 10:44:49 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

/*--------------------------------------------------------------------------------------*/
/*------------------------------ Contructors & Destructor ------------------------------*/
/*--------------------------------------------------------------------------------------*/

Fixed::Fixed() : value(0){}											// Default Contructor

Fixed::~Fixed(){}													// Destructor

Fixed::Fixed(const Fixed &copy)										// Copy Contructor
{
	*this = copy;
}

Fixed::Fixed(const int num)											// Int Contructor
{
	this->value = num << bits;
}

Fixed::Fixed(const float num)										// Float Contructor
{
	this->value = roundf(num * (1 << bits));
}
/*--------------------------------------------------------------------------------------*/
/*-------------------------------------- Operators -------------------------------------*/
/*--------------------------------------------------------------------------------------*/

Fixed &Fixed::operator=(const Fixed &other)					// Copy Assignment Operator
{
	this->value = other.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(const Fixed &other) const		// Addition Arithmetic Operator
{
	return (Fixed(toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other) const		// Subtraction Arithmetic Operator
{
	return (Fixed(toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other) const	// Multiplication Arithmetic Operator
{
	return (Fixed(toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other) const		// Division Arithmetic Operator
{
	return (Fixed(toFloat() / other.toFloat()));
}

bool Fixed::operator<(const Fixed &other) const					// "Less Than" Operator
{
	return (this->value < other.value);
}

bool Fixed::operator>(const Fixed &other) const					// "Greater Than" Operator
{
	return (this->value > other.value);
}

bool Fixed::operator<=(const Fixed &other) const		// "Less Than or Equal To" Operator
{
	return (this->value <= other.value);
}

bool Fixed::operator>=(const Fixed &other) const	// "Greater Than or Equal To" Operator
{
	return (this->value >= other.value);
}

bool Fixed::operator==(const Fixed &other) const					// "Equal to " Operator
{
	return (this->value == other.value);
}

bool Fixed::operator!=(const Fixed &other) const				// "Not Equal to " Operator
{
	return (this->value != other.value);
}

Fixed Fixed::operator++(void)									// "Pre-increment" Operator
{
	return (this->value++, *this);
}

Fixed Fixed::operator++(int)									// "Post-increment" Operator
{
	Fixed tmp(*this);

	return (this->value++, tmp);
}

Fixed Fixed::operator--(void)									// "Pre-decrement" Operator
{
	return (this->value--, *this);
}

Fixed Fixed::operator--(int)									// "Post-decrement" Operator
{
	Fixed tmp(*this);

	return (this->value--, tmp);
}
/*--------------------------------------------------------------------------------------*/
/*---------------------------------- Member Functions ----------------------------------*/
/*--------------------------------------------------------------------------------------*/

void Fixed::setRawBits(int const raw) 									// Sets Raw Bits
{
	this->value = raw;
}

int Fixed::getRawBits(void) const										 // Gets Raw Bits
{
	return (this->value);
}

int Fixed::toInt(void) const						 // Converts fixed-point to Intenger
{
	return ((this->value) >> bits);
}

float Fixed::toFloat(void) const 						// Converts fixed-point to Float
{
	return ((float)(this->value) / (1 << bits));
}

Fixed &Fixed::min(Fixed &a, Fixed &b) 					// Returns the smallest fixed-point
{
	return (a < b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)	// Returns the smallest constant fixed-point
{
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) 					// Returns the biggest fixed-point
{
	return (a > b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)	// Returns the biggest constant fixed-point
{
	return (a > b ? a : b);
}
/*--------------------------------------------------------------------------------------*/
/*----------------------------------- Friend Function ----------------------------------*/
/*--------------------------------------------------------------------------------------*/

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}
