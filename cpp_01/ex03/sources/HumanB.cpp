/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:33:29 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/07/19 11:10:53 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

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
