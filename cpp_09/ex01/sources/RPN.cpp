/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:19:02 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/09/25 15:00:01 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/headers.hpp"

/*----------------------------------------------------------------------------*/
/*-------------------------- Constructors & Destructor -----------------------*/
/*----------------------------------------------------------------------------*/

RPN::RPN() : stack() {}

RPN::RPN(const RPN &copy) {
	*this = copy;
}

RPN::~RPN() {}

/*----------------------------------------------------------------------------*/
/*--------------------------------- Operator ---------------------------------*/
/*----------------------------------------------------------------------------*/

RPN&	RPN::operator=(const RPN &other)
{
	if (this != &other){
		this->stack = other.stack;
	}
	return (*this);
}

/*----------------------------------------------------------------------------*/
/*------------------------------ Member Functions ----------------------------*/
/*----------------------------------------------------------------------------*/

void	RPN::push(float value)
{
	stack.push(value);
}

float	RPN::pop()
{
	if (stack.empty())
		throw std::runtime_error("Error: Invalid operation");

	float	value = stack.top();
	stack.pop();
	return (value);
}

int	RPN::size()
{
	return (stack.size());
}

void	RPN::performOperation(std::string& token)
{
	char operator_ = token[0];
	float value1 = pop();
	float value2 = pop();
	float result;

	switch (operator_)
	{
		case '+':
			result = value2 + value1;
			break;
		case '-':
			result = value2 - value1;
			break;
		case '*':
			result = value2 * value1;
			break;
		case '/':
			if (value1 == 0)
				throw std::runtime_error("Error: Division by zero.");
			result = value2 / value1;
			break;
		default:
			throw std::runtime_error("Error: Unknown operator.");
	}
	push(result);
}

void	RPN::handleExpression(char* argv)
{
	std::stringstream	iss(argv);
	std::string			token;

	while (iss >> token)
	{
		if (token[0] == '+' || token[0] == '*' || token[0] == '/' || token[0] == '-')
		{
			if (token.size() == 1)
			{
				performOperation(token);
				continue ;
			}
			else
				throw std::runtime_error("Error: Invalid token.");
		}
		float value = static_cast<float>(atof(token.c_str()));

		if (value < 0 || value > 9)
			throw std::runtime_error("Error: only values from 0 to 9.");
		push(value);
	}
}
