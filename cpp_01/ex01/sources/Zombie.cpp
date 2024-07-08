/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:27:34 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/07/08 15:53:45 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void Zombie::announce()
{
	std::cout << CYAN << name << RESET << ":" << GREEN << " BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}

Zombie::~Zombie()
{
	std::cout << CYAN << name << RESET << ":" << RED << " was destroyed!" << RESET << std::endl;
}

void Zombie::set_name(std::string name_set)
{
	name = name_set;
}
