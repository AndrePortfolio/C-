/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:16:47 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/07/10 12:07:37 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Harl_HPP
# define Harl_HPP

# include "Harl.h"

class Harl
{
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();

	public:
		Harl(){}
		~Harl(){}
		void	complain(std::string level);
};

#endif
