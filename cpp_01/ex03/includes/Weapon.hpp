/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:33:25 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/05/15 14:06:05 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include "Weapon.h"

class Weapon
{
    private:
        std::string type;

    public:
        const std::string   &getType();
        void                setType(std::string set_type);
        
        Weapon(std::string type) : type(type){}
        ~Weapon();
};

#endif