/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:32:24 by andre-da          #+#    #+#             */
/*   Updated: 2024/09/13 12:55:55 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

/*----------------------------------------------------------------------------*/
/*------------------------- Contructors & Destructor -------------------------*/
/*----------------------------------------------------------------------------*/

ScavTrap::ScavTrap() : ClapTrap() 							// Default Contructor
{
	this->name = "Default Scav";

	std::cout << "ScavTrap Default Contructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)				// Contructor
{
	std::cout << "ScavTrap Contructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)		// Copy Contructor
{
	*this = copy;

	std::cout << "ScavTrap Copy contructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)											// Destructor
{
	std::cout << "ScavTrap Destructor has been called" << std::endl;
}

/*----------------------------------------------------------------------------*/
/*--------------------------------- Operator ---------------------------------*/
/*----------------------------------------------------------------------------*/

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	std::cout << "ScavTrap Copy Assignment operator  called" << std::endl;
	return (*this);
}
/*----------------------------------------------------------------------------*/
/*----------------------------- Member Functions -----------------------------*/
/*----------------------------------------------------------------------------*/

void	ScavTrap::guardGate(void)
{
	std::cout	<< "ScavTrap " << name
				<< " has entered Gate keeper mode" << std::endl;
}

