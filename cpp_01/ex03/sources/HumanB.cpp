/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:33:29 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/07/10 11:29:05 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"
#include <stdio.h>

HumanB::~HumanB()
{
	std::cout << name << " died" << std::endl;
}

void HumanB::attack()
{
	if (!weapon)
	{
		std::cout << name << " has no weapon" << std::endl;
		return ;
	}
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::grabWeapon(Weapon &type)
{
	weapon = &type;
}

void HumanB::freeWeapon()
{
	weapon = NULL;
}
