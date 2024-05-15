/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:53:56 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/05/14 21:11:59 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include "Zombie.h"

class Zombie
{
    private:
        std::string name;

    public:
        void            announce();
        void            randomChump(std::string name);
        static Zombie*  newZombie(std::string name);
        
        Zombie() : name("Zombie_1"){}
        Zombie(std::string name) : name(name){}
        ~Zombie();
};

#endif