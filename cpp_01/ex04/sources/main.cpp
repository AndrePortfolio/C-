/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:07:45 by andre-da          #+#    #+#             */
/*   Updated: 2024/07/08 15:56:24 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Replace.h"

void	error_message(std::string str)
{
	std::cerr << str << std::endl;
	exit(1);
}

// void	replaceAll(std::string &fileContent, std::string &from, std::string &to)
// {
// 	if (from.empty())
// 		return ;
// }

int	main(int argc, char *argv[])
{
	if (argc != 4)
		error_message("Invalid number of arguments");
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream inputFile(filename);
	if (!inputFile.is_open())
		error_message("Failed to open the file");
	std::stringstream buffer;
	std::string line;
	while (std::getline(inputFile, line))
		buffer << line << '\n';
	inputFile.close();
	std::string fileContent = buffer.str();
	// replaceAll(fileContent, s1, s2);
	Replace file("folder");
	std::cout << std::endl;
}
