/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:33:32 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/05/15 14:16:06 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.h"

int main(void)
{
    Weapon  weapon1("Bazooka");
    Weapon  weapon2("Sniper");

    HumanA  human1("John", weapon1);
    HumanB  human2("Mike");
    
    human1.attack();
    human2.attack();
    std::cout << std::endl;
}