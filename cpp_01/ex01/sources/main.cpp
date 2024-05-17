/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre-da <andre-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:27:32 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/05/17 11:44:20 by andre-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Zombie.h"

int main(void)
{
    Zombie  *zombie = NULL;
    int     nbr;

    nbr = 10;
    zombie = Zombie::zombieHorde(nbr, "cool");
    
    for (int i = 0; i < nbr; i++)
        zombie[i].announce();
    
    delete[] zombie;
}