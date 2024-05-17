/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre-da <andre-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:33:25 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/05/17 17:16:18 by andre-da         ###   ########.fr       */
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
        void                setType(const std::string new_type);
        
        Weapon(std::string initialType) : type(initialType){}
        ~Weapon();
};

#endif