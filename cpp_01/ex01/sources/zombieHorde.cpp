/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:27:37 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/07/08 15:53:48 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie *Zombie::zombieHorde(int N, std::string name)
{
	Zombie *Horde = NULL;

	Horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		Horde[i].set_name(name);

	return (Horde);
}
