/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:33:32 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/09/11 16:22:58 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.h"

int	main(void)
{
	Weapon weapon1("Bazooka");
	Weapon weapon2("Sniper");

	HumanA human1("John", weapon1);
	HumanB human2("Mike");

	human1.attack();
	weapon1.setType("Bomb");
	human1.attack();
	std::cout << std::endl;

	human2.attack();
	human2.grabWeapon(weapon2);
	human2.attack();
	weapon2.setType("AK-47");
	human2.attack();
	human2.freeWeapon();
	human2.attack();
	std::cout << std::endl;
}
