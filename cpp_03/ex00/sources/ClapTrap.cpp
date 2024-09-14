/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:32:24 by andre-da          #+#    #+#             */
/*   Updated: 2024/09/13 12:17:47 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

/*----------------------------------------------------------------------------*/
/*------------------------- Contructors & Destructor -------------------------*/
/*----------------------------------------------------------------------------*/

ClapTrap::ClapTrap()										// Default Contructor
	: name("Default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Default Contructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)								// Contructor
	: name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Contructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)						// Copy Contructor
{
	*this = copy;

	std::cout << "Copy contructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)											// Destructor
{
	std::cout << "Destructor has been called" << std::endl;
}

/*----------------------------------------------------------------------------*/
/*--------------------------------- Operator ---------------------------------*/
/*----------------------------------------------------------------------------*/

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	std::cout << "Copy Assignment operator  called" << std::endl;
	return (*this);
}

/*----------------------------------------------------------------------------*/
/*----------------------------- Member Functions -----------------------------*/
/*----------------------------------------------------------------------------*/

void	ClapTrap::attack(const std::string &target)
{
	if (energyPoints <= 0 || hitPoints <= 0)
	{
		if (energyPoints <= 0)
			std::cout << name << " doesn't have energy to attack!" << std::endl;
		else
			std::cout << name << " can't attack because it died" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout	<< "ClapTrap " << name
				<< " attacks " << target
				<< ", causing " << attackDamage
				<< " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > 0 && (int)amount <= std::numeric_limits<int>::max())
		hitPoints -= amount;
	if (hitPoints < 0)
		hitPoints = 0;
	std::cout	<< "ClapTrap " << name
				<< " is attacked, losing " << amount
				<< " points of health!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (amount > 0 && (int)amount <= std::numeric_limits<int>::max())
		hitPoints = amount;
	std::cout	<< "ClapTrap " << name
				<< " repaires hitself by " << amount
				<< " points of health!" << std::endl;
}

std::string	ClapTrap::getName(void)const
{
	return (this->name);
}

int	ClapTrap::getHitPoints(void)const
{
	return (this->hitPoints);
}

int	ClapTrap::getEnergyPoints(void)const
{
	return (this->energyPoints);
}

void	ClapTrap::setAttackDamage(int damage)
{
	this->attackDamage = damage;
}

int	ClapTrap::getAttackDamage(void)const
{
	return (this->attackDamage);
}
