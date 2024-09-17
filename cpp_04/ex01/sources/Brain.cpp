/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:32:24 by andre-da          #+#    #+#             */
/*   Updated: 2024/08/19 16:23:44 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*----------------------------------------------------------------------------*/
/*------------------------- Constructors & Destructor -----------------------*/
/*----------------------------------------------------------------------------*/

Brain::Brain()
{
	std::cout << "Brain Default Constructor called" << std::endl;

	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = "No idea";
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain Copy Constructor called" << std::endl;

	*this = copy;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

/*----------------------------------------------------------------------------*/
/*--------------------------------- Operator ---------------------------------*/
/*----------------------------------------------------------------------------*/

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain Copy Assignment operator called" << std::endl;

	if (this != &other)
	{
		for (size_t i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

/*----------------------------------------------------------------------------*/
/*------------------------------ Member Functions ----------------------------*/
/*----------------------------------------------------------------------------*/

std::string	Brain::getIdea(int index) const
{
	return (ideas[index]);
}

void	Brain::setIdea(int index, const std::string &idea)
{
	ideas[index] = idea;
}