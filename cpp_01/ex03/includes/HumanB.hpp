/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:33:20 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/05/15 14:17:48 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "HumanB.h"

class HumanB
{
    private:
        std::string name;
        class Weapon      *weapon;

    public:
        void    attack();

        HumanB(std::string name) : name(name), weapon(nullptr){}
        ~HumanB();
};

#endif