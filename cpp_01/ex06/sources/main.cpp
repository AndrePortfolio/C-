/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:14:39 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/07/10 12:40:14 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.h"

void	error_message(std::string str)
{
	std::cerr << YELLOW << str << RESET << std::endl;
	exit(1);
}

int	main(int argc, char *argv[])
{
	std::string	levels[] = {"debug", "info", "warning", "error"};
	size_t		levelsSize = sizeof(levels) / sizeof(levels[0]);
	bool		levelFound = false;
	Harl		isHarl;

	if (argc != 2)
		error_message("[ Probably complaining about insignificant problems ]");
	for (size_t i = 0; i < levelsSize; i++)
	{
		if (levels[i].compare(argv[1]) == 0)
		{
			for (size_t j = i; j < levelsSize; j++)
				isHarl.complain(levels[j]);
			levelFound = true;
			break ;
		}
	}
	if (!levelFound)
		std::cout << CYAN << "[ Probably complaining about insignificant problems ]" << RESET << std::endl;
}
