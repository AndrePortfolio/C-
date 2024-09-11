/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Filter.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:42:00 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/09/11 16:45:13 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.h"

std::string toLowerCase(const std::string &str)
{
	std::string	result;

	for (int i = 0; i < (int)str.size(); i++)
		result += std::tolower(str[i]);
		
	return (result);
}

int	getLevelIndex(const std::string &level)
{
	std::string levels[] = {"debug", "info", "warning", "error"};
	std::string lowerCased = toLowerCase(level);

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == lowerCased)
			return (i);
	}
	return (-1);
}
