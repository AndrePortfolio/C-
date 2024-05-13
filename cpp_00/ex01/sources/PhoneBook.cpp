/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:53:58 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/05/14 00:18:55 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

void    DiplayTable()
{
    std::cout << YELLOW << "  _____________________________________________" << RESET << std::endl;
    std::cout << YELLOW << "  |     " << RESET << "Index" << YELLOW << "|" << RESET << "First name";
    std::cout << YELLOW << "|" << RESET << " Last name" << YELLOW << "|" << RESET << "  Nickname";
    std::cout << YELLOW << "|" << RESET << std::endl;
    std::cout << YELLOW << "  ---------------------------------------------" << RESET << std::endl;
}

void    PhoneBook::SearchContact(int contacts_nbr)
{   
    std::string line;
    int i;
    
    DiplayTable();
    
    i = -1;
    while (contacts_nbr > ++i)
        contacts[i].GetShortContact(i);

    if (i == 0)
    {
        std::cout << std::endl;
        return ;
    }
    std::cout << YELLOW << "  ---------------------------------------------" << RESET << std::endl << std::endl;
    
    while (true)
    {        
        std::cout << "  Contact to display: ";
        std::getline(std::cin, line);
        line.erase(0, line.find_first_not_of(WHITE_SPACES));
        line.erase(line.find_last_not_of(WHITE_SPACES) + 1);
        
        if (line.empty())
            continue; 
        i = 0;
        while (contacts_nbr > i)
        {
            if (line == std::to_string(i))
            {
                contacts[i].GetLongContact();
                std::cout << std::endl;
                return ;
            }
            i++;
        }
        std::cout << RED << "  Invalid index" << RESET << std::endl;
    }
}