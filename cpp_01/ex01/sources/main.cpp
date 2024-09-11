/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:27:32 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/09/11 16:14:20 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.h"

int	main(void)
{
	Zombie*	zombies1 = zombieHorde(5, "Ben");
	Zombie*	zombies2 = zombieHorde(3, "Mark");

	for (int ctd = 0; ctd < 5; ctd++)
		zombies1[ctd].announce();

	for (int ctd = 0; ctd < 3; ctd++)
		zombies2[ctd].announce();

	delete[] zombies1;
	delete[] zombies2;
}
