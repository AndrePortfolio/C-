/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:16:37 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/07/10 12:24:32 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

void	Harl::debug()
{
	std::cout << CYAN << "[ DEBUG ]" << RESET << std::endl;
}

void	Harl::info()
{
	std::cout << GREEN << "[ INFO ]" << RESET << std::endl;
}

void	Harl::warning()
{
	std::cout << YELLOW << "[ WARNING ]" << RESET << std::endl;
}

void	Harl::error()
{
	std::cout << RED << "[ ERROR ]" << RESET << std::endl;
}

void	Harl::complain(std::string level)
{
	void (Harl::*actions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[] = {"debug", "info", "warning", "error"};


	for (size_t i = 0; i < levels->length(); i++)
	{
		if (levels[i].compare(level) == 0)
		{
			(this->*actions[i])();
			return ;
		}
	}
	std::cout << RED << "Unknown level: " << RESET << level << std::endl;
}
