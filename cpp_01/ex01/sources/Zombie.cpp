/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:27:34 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/09/11 16:25:59 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie() : name("Zombie_1"){}

Zombie::Zombie(std::string name) : name(name){}

Zombie::~Zombie()
{
	std::cout << CYAN << name << RESET << ":" << RED << " was destroyed!" << RESET << std::endl;
}

void Zombie::set_name(std::string name_set)
{
	name = name_set;
}

void Zombie::announce()
{
	std::cout << CYAN << name << RESET << ":" << GREEN << " BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}
