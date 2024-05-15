/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:27:32 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/05/15 11:05:05 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Zombie.h"

int main(void)
{
    Zombie  *zombie = nullptr;
    int     nbr;

    nbr = 10;
    zombie = Zombie::zombieHorde(nbr, "cool");
    
    for (int i = 0; i < nbr; i++)
        zombie[i].announce();
    
    delete[] zombie;
}