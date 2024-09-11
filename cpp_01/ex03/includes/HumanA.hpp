/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:33:13 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/09/11 16:26:40 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "HumanA.h"

class Weapon;

class HumanA
{
	private:
		std::string	name;
		Weapon		&weapon;

	public:
		void	attack();

		HumanA(std::string name, Weapon &weapon);
		~HumanA();
};

#endif
