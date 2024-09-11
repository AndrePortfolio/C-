/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:55:56 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/09/11 16:02:52 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.h"

int	main(void)
{
	Zombie*	zombie = newZombie("Ben");

	zombie->announce();
	randomChump("John");
	randomChump("Mark");
	zombie->announce();

	delete zombie;
	return (0);
}
