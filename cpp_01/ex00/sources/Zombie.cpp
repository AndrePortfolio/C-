/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:59:57 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/05/14 19:28:08 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void    Zombie::announce()
{
    std::cout << CYAN << name << RESET << ":" << GREEN << " BraiiiiiiinnnzzzZ..."<< RESET << std::endl;
}

Zombie::~Zombie()
{
    std::cout << CYAN << name << RESET << ":" << RED << " was destroyed!" << RESET << std::endl;
}