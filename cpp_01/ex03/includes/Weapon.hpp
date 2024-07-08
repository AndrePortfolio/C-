/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:33:25 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/07/08 15:52:24 by andrealbuqu      ###   ########.fr       */
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
		const std::string &getType();
		void setType(const std::string new_type);

	Weapon(std::string initialType) : type(initialType){}
	~Weapon();
};

#endif
