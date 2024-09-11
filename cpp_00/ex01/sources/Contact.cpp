/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:05:03 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/09/11 15:41:03 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

void Contact::AddContactField(const std::string &prompt, std::string &field)
{
	std::string line;
	while (line.empty())
	{
		std::cout << CYAN << prompt << RESET << " > ";
		std::getline(std::cin, line);
		line.erase(0, line.find_first_not_of(WHITE_SPACES));
		line.erase(line.find_last_not_of(WHITE_SPACES) + 1);
	}
	field = line;
}

void Contact::AddContact()
{
	std::cout << std::endl;
	AddContactField("  First name    ", first_name);
	AddContactField("  Last name     ", last_name);
	AddContactField("  Nickname      ", nickname);
	AddContactField("  Phone number  ", phone_number);
	AddContactField("  Darkest Secret", darkest_secret);
	std::cout << std::endl;
}

void Contact::TruncateContact(std::string &field)
{
	size_t	length;

	std::string truncatedField;
	length = 0;
	for (size_t i = 0; i < field.length(); ++i)
	{
		if ((field[i] & 0b11000000) != 0b10000000)
			++length;
		if (length > 10)
		{
			truncatedField = field.substr(0, 9) + ".";
			break ;
		}
	}
	if (length <= 10)
		truncatedField = std::string(10 - length, ' ') + field;
	std::cout << truncatedField;
}

void Contact::GetShortContact(int i)
{
	std::cout << YELLOW << "  |         " << RESET << i;
	std::cout << YELLOW << "|" << RESET;
	TruncateContact(first_name);
	std::cout << YELLOW << "|" << RESET;
	TruncateContact(last_name);
	std::cout << YELLOW << "|" << RESET;
	TruncateContact(nickname);
	std::cout << YELLOW << "|" << RESET << std::endl;
}

void Contact::GetLongContact()
{
	std::cout << std::endl << CYAN << "  First name    " << RESET << " > " << first_name << std::endl;
	std::cout << CYAN << "  Last name     " << RESET << " > " << last_name << std::endl;
	std::cout << CYAN << "  Nickname      " << RESET << " > " << nickname << std::endl;
	std::cout << CYAN << "  Phone number  " << RESET << " > " << phone_number << std::endl;
	std::cout << CYAN << "  Darkest secret" << RESET << " > " << darkest_secret << std::endl;
}
