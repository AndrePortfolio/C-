/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre-da <andre-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:33:34 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/05/17 17:17:56 by andre-da         ###   ########.fr       */
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

void    Weapon::setType(std::string number)
{
    type = number;
}