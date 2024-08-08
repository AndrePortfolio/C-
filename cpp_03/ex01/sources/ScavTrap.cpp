/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:32:24 by andre-da          #+#    #+#             */
/*   Updated: 2024/07/19 09:49:43 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

/*----------------------------------------------------------------------------*/
/*------------------------- Contructors & Destructor -------------------------*/
/*----------------------------------------------------------------------------*/

ScavTrap::ScavTrap() : ClapTrap()							// Default Contructor
{
	this->name = "Default Scav";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;

	std::cout << "ScavTrap Default Contructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)				// Contructor
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;

	std::cout << "ScavTrap Contructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap()			// Copy Contructor
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;

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

void	ScavTrap::attack(const std::string &target)
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
	std::cout	<< "ScavTrap " << name
				<< " attacks " << target
				<< ", causing " << attackDamage
				<< " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (amount > 0 && amount <= INT_MAX)
		hitPoints -= amount;
	if (hitPoints < 0)
		hitPoints = 0;
	std::cout	<< "ScavTrap " << name
				<< " is attacked, losing " << amount
				<< " points of health!" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (amount > 0 && amount <= INT_MAX)
		hitPoints = amount;
	std::cout	<< "ScavTrap " << name
				<< " repaires hitself by " << amount
				<< " points of health!" << std::endl;
}

std::string	ScavTrap::getName(void)const
{
	return (this->name);
}

int	ScavTrap::getHitPoints(void)const
{
	return (this->hitPoints);
}

int	ScavTrap::getEnergyPoints(void)const
{
	return (this->energyPoints);
}

void	ScavTrap::setAttackDamage(int damage)
{
	this->attackDamage = damage;
}

int	ScavTrap::getAttackDamage(void)const
{
	return (this->attackDamage);
}

void	ScavTrap::guardGate(void)
{
	std::cout	<< "ScavTrap " << name
				<< " has entered Gate keeper mode" << std::endl;
}

