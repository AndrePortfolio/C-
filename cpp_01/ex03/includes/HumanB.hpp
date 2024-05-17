/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre-da <andre-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:33:20 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/05/17 17:35:57 by andre-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "HumanB.h"

class HumanB
{
    private:
        std::string     name;
        class Weapon    *weapon;

    public:
        void    attack();
        void    grabWeapon(Weapon& number);
        void    freeWeapon();

        HumanB(std::string name) : name(name), weapon(NULL){}
        ~HumanB();
};

#endif