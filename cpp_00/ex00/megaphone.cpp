/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 21:50:01 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/05/12 18:56:00 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string	toUpperCase(const std::string& str)
{
	std::string result;

	for (int i = 0; i < (int)str.size(); i++)
		result += std::toupper(str[i]);
		
	return (result);
}

int	main(int argc, char **argv)
{	
	std::string uppercased;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; i++)
		{
			uppercased = toUpperCase(argv[i]);	
			std::cout << uppercased;
			if (argc != (i + 1))
				std::cout << " ";
		}
	}	
	std::cout << std::endl;
	return (0);
}
