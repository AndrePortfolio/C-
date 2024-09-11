/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:33:20 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/09/11 16:27:02 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "HumanB.h"

class Weapon;

class HumanB
{
	private:
		std::string	name;
		Weapon		*weapon;

	public:
		void	attack();
		void	grabWeapon(Weapon &number);
		void	freeWeapon();

		HumanB(std::string name);
		~HumanB();
};

#endif
