/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:27:30 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/05/15 10:59:30 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include "Zombie.h"

class   Zombie
{
    private:
        std::string name;

    public:
        void            announce();
        static Zombie*  zombieHorde(int N, std::string name);
        void            set_name(std::string name);
        
        Zombie() : name("Zombie_1"){}
        Zombie(std::string name) : name(name){}
        ~Zombie();
};

#endif