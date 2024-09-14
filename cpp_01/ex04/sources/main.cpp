/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:07:45 by andre-da          #+#    #+#             */
/*   Updated: 2024/07/11 12:00:20 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Replace.h"

void	error_message(const char* str)
{
	std::cerr << str << std::endl;
	exit(1);
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
		error_message("Invalid number of arguments");

	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	Replace replace(filename, s1, s2);
	replace.performReplacement();

	std::cout << "Replacement done. Output saved to " << filename + ".replace" << std::endl;
}
