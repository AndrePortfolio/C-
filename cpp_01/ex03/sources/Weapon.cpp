/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:33:34 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/05/15 14:01:54 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::~Weapon()
{
    std::cout << type << " destroyed" << std::endl;
}

const std::string&  Weapon::getType()
{
    return (type);
}

void    Weapon::setType(std::string set_type)
{
    type = set_type;
}