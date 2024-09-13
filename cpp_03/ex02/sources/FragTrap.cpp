/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:32:24 by andre-da          #+#    #+#             */
/*   Updated: 2024/09/13 12:55:02 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

/*----------------------------------------------------------------------------*/
/*------------------------- Contructors & Destructor -------------------------*/
/*----------------------------------------------------------------------------*/

FragTrap::FragTrap() : ClapTrap()							// Default Contructor
{
	this->name = "Default Frag";

	std::cout << "FragTrap Default Contructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)				// Contructor
{
	std::cout << "FragTrap Contructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)		// Copy Contructor
{
	*this = copy;

	std::cout << "FragTrap Copy contructor called" << std::endl;
}

FragTrap::~FragTrap(void)											// Destructor
{
	std::cout << "FragTrap Destructor has been called" << std::endl;
}

/*----------------------------------------------------------------------------*/
/*--------------------------------- Operator ---------------------------------*/
/*----------------------------------------------------------------------------*/

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
		ClapTrap::operator=(other);

	std::cout << "FragTrap Copy Assignment operator called" << std::endl;
	return (*this);
}
/*----------------------------------------------------------------------------*/
/*----------------------------- Member Functions -----------------------------*/
/*----------------------------------------------------------------------------*/

void	FragTrap::highFivesGuys(void)
{
	std::cout	<< "FragTrap " << name
				<< " has requested a high five!" << std::endl;
}

