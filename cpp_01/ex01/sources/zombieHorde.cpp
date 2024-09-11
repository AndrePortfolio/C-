/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:27:37 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/09/11 16:12:30 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.h"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie *Horde = NULL;

	Horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		Horde[i].set_name(name);

	return (Horde);
}
