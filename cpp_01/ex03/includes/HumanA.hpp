/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre-da <andre-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:33:13 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/05/17 16:25:07 by andre-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "HumanA.h"
# include "Weapon.hpp"

class HumanA
{
    private:
        std::string     name;
        class Weapon    &weapon;

    public:
        void    attack();
                
        HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon){}
        ~HumanA();
};

#endif