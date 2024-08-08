/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:32:24 by andre-da          #+#    #+#             */
/*   Updated: 2024/07/19 09:59:43 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

/*----------------------------------------------------------------------------*/
/*------------------------- Contructors & Destructor -------------------------*/
/*----------------------------------------------------------------------------*/

FragTrap::FragTrap() : ClapTrap()							// Default Contructor
{
	this->name = "Default Frag";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;

	std::cout << "FragTrap Default Contructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)				// Contructor
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;

	std::cout << "FragTrap Contructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)		// Copy Contructor
{
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

void	FragTrap::attack(const std::string &target)
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
	std::cout	<< "FragTrap " << name
				<< " attacks " << target
				<< ", causing " << attackDamage
				<< " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (amount > 0 && amount <= INT_MAX)
		hitPoints -= amount;
	if (hitPoints < 0)
		hitPoints = 0;
	std::cout	<< "FragTrap " << name
				<< " is attacked, losing " << amount
				<< " points of health!" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (amount > 0 && amount <= INT_MAX)
		hitPoints = amount;
	std::cout	<< "FragTrap " << name
				<< " repaires hitself by " << amount
				<< " points of health!" << std::endl;
}

std::string	FragTrap::getName(void)const
{
	return (this->name);
}

int	FragTrap::getHitPoints(void)const
{
	return (this->hitPoints);
}

int	FragTrap::getEnergyPoints(void)const
{
	return (this->energyPoints);
}

void	FragTrap::setAttackDamage(int damage)
{
	this->attackDamage = damage;
}

int	FragTrap::getAttackDamage(void)const
{
	return (this->attackDamage);
}

void	FragTrap::guardGate(void)
{
	std::cout	<< "FragTrap " << name
				<< " has entered Gate keeper mode" << std::endl;
}

