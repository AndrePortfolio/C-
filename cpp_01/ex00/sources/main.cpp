/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:55:56 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/07/11 12:03:16 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.h"

int	main(void)
{
	Zombie	zombie1;
	Zombie	*zombie2 = NULL;

	zombie1.announce();
	std::cout << std::endl;
	zombie2 = Zombie::newZombie("Zombie_2");
	zombie2->announce();
	std::cout << std::endl;
	zombie1.randomChump("Zombie_3");
	std::cout << std::endl;
	zombie2->randomChump("Zombie_4");
	std::cout << std::endl;
	delete zombie2;
	return (0);
}
