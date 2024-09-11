/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:14:54 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/09/11 16:50:06 by andrealbuqu      ###   ########.fr       */
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

	for (size_t i = 0; i < level.length(); i++)
	{
		if (levels[i].compare(level) == 0)
		{
			(this->*actions[i])();
			return ;
		}
	}
	std::cout << RED << "Unknown level: " << RESET << level << std::endl;
}

void	Harl::filter(std::string level)
{
	int	index = getLevelIndex(level);

	switch (index)
	{
		case 0:
			complain("debug");
			index++;
		case 1:
			complain("info");
			index++;
		case 2:
			complain("warning");
			index++;
		case 3:
			complain("error");
			break ;
		default:
			std::cout << CYAN << "[ Probably complaining about insignificant problems ]" << RESET << std::endl;
	}
}
