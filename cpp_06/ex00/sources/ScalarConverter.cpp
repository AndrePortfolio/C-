/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:32:24 by andre-da          #+#    #+#             */
/*   Updated: 2024/08/22 14:55:54 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

/*----------------------------------------------------------------------------*/
/*------------------------- Constructors & Destructor -----------------------*/
/*----------------------------------------------------------------------------*/

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter Default Constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	*this = copy;

	std::cout << "ScalarConverter Copy Constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter Destructor called" << std::endl;
}

/*----------------------------------------------------------------------------*/
/*--------------------------------- Operator ---------------------------------*/
/*----------------------------------------------------------------------------*/

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	if (this != &other)
	{
		*this = other;
	}
	std::cout << "ScalarConverter Copy Assignment Operator called" << std::endl;
	return (*this);
}

/*----------------------------------------------------------------------------*/
/*------------------------------ Member Functions ----------------------------*/
/*----------------------------------------------------------------------------*/

static void	printChar(double value)
{
	if (std::isnan(value) || value < std::numeric_limits<char>::min()
		|| value > std::numeric_limits<char>::max())
		std::cout << "char:   impossible\n";
	else if (!std::isprint(static_cast<char>(value)))
		std::cout << "char:   not displayable\n";
	else
		std::cout << "char:   '" << static_cast<char>(value) << "'\n";
}

static void	printInt(double value)
{
	if (std::isnan(value) || value < std::numeric_limits<int>::min()
		|| value > std::numeric_limits<int>::max())
		std::cout << "int:    impossible" << "\n";
	else
		std::cout << "int:    " << static_cast<int>(value) << "\n";
}

static void	printFloat(double value)
{
	if (std::isnan(value))
		std::cout << "float:  nanf\n";
	else if (std::isinf(value))
		std::cout << "float:  " << (value > 0 ? "+inff" : "-inff") << "\n";
	else if (value < -std::numeric_limits<float>::max() || value > std::numeric_limits<float>::max())
		std::cout << "float:  impossible\n";
	else
		std::cout << "float:  " << static_cast<float>(value) << "f\n";
}

static void	printDouble(double value)
{
	if (std::isnan(value))
		std::cout << "double: nan\n";
	else if (std::isinf(value))
		std::cout << "double: " << (value > 0 ? "+inf" : "-inf") << "\n";
	else
		std::cout << "double: " << value  << "\n";
}

void	ScalarConverter::convert(const std::string &literal)
{
	double	value = std::strtod(literal.c_str(), nullptr);

	if (literal.length() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0]))
		value = static_cast<double>(literal[0]);
	else if (literal.find_first_not_of("+-0123456789.f") != std::string::npos)
	{
		std::cerr << "Invalid literal" << std::endl;
		return ;
	}
	printChar(value);
	printInt(value);
	printFloat(value);
	printDouble(value);
}
