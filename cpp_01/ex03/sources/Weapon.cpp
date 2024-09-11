/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:33:34 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/09/11 16:27:32 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string initialType) : type(initialType){}

Weapon::~Weapon()
{
	std::cout << type << " destroyed" << std::endl;
}

const std::string &Weapon::getType()
{
	return (type);
}

void Weapon::setType(std::string number)
{
	type = number;
}
