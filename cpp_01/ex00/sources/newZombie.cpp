/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre-da <andre-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:47:47 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/05/17 11:43:49 by andre-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie*  Zombie::newZombie(std::string name)
{
    Zombie *newZombie;
    
    newZombie = new Zombie(name);
    if (!newZombie)
    {
        std::cerr << "Failed to allocate memory for Zombie object" << std::endl;
        return (NULL);
    }
    return (newZombie);
}