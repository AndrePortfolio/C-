/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 19:01:59 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/09/11 15:45:07 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include "../includes/header.h"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	line;
	bool		max_contacts;
	int			i;

	max_contacts = false;
	std::cout << std::endl << GREEN << "                   Welcome to your phonebook!" << RESET << std::endl;
	std::cout << "You'll have 3 options to use at any moment: (";
	std::cout << CYAN << "ADD" << RESET <<
		"," << YELLOW << "SEARCH" << RESET <<
		"," << RED << "EXIT" << RESET << ")" << std::endl << std::endl;
	i = 0;
	while (true)
	{
		std::cout << CYAN << "⇾ " << RESET;
		std::getline(std::cin, line);
		line.erase(0, line.find_first_not_of(WHITE_SPACES));
		line.erase(line.find_last_not_of(WHITE_SPACES) + 1);
		if (line.empty())
			continue ;
		if (std::strcmp(line.c_str(), "ADD") == EQUAL)
		{
			phonebook.contacts[i++].AddContact();
			if (i == 8)
			{
				max_contacts = true;
				i = 0;
			}
		}
		else if (std::strcmp(line.c_str(), "SEARCH") == EQUAL)
		{
			if (!max_contacts)
				phonebook.SearchContact(i);
			else
				phonebook.SearchContact(MAX_CONTACTS);
		}
		else if (std::strcmp(line.c_str(), "EXIT") == EQUAL)
			break ;
		else
			std::cout << RED << "  Invalid option" << RESET << std::endl;
	}
	std::cout << std::endl;
	return (0);
}
