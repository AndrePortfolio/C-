/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:32:24 by andre-da          #+#    #+#             */
/*   Updated: 2024/09/13 12:11:19 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main(void)
{
	ClapTrap	cp1("Sparky");
	ClapTrap	cp2("Jolt");

	std::cout << std::endl;
	cp1.setAttackDamage(3);

	cp1.attack(cp2.getName());
	cp2.takeDamage(cp1.getAttackDamage());

	std::cout	<< cp2.getName() << " has " << cp2.getHitPoints() << " Hitpoints\n"
				<< std::endl;

	cp2.beRepaired(10);
	std::cout	<< cp2.getName() << " has " << cp2.getHitPoints() << " Hitpoints\n"
				<< std::endl;

	cp1.setAttackDamage(7);
	cp1.attack(cp2.getName());
	cp2.takeDamage(cp1.getAttackDamage());

	std::cout	<< cp2.getName() << " has " << cp2.getHitPoints() << " Hitpoints\n"
				<< std::endl;
	return (0);
}
