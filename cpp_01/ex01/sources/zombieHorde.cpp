/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre-da <andre-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:27:37 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/05/17 11:44:35 by andre-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
    Zombie  *Horde = NULL;

    Horde = new Zombie[N];
    
    for (int i = 0; i < N; i++)
        Horde[i].set_name(name);
    
    return (Horde);
}