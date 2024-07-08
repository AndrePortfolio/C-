/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 18:48:33 by andre-da          #+#    #+#             */
/*   Updated: 2024/07/08 17:03:02 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Replace.h"

Replace::Replace(std::string& inputFileName, std::string& s1, std::string& s2)
{
	this->inputFileName = inputFileName;
	this->s1 = s1;
	this->s2 = s2;
	this->outputFileName = inputFileName + ".replace";
}

void	Replace::readFile()
{
	std::ifstream	inputFile(inputFileName);
	std::stringstream	buffer;

	if (!inputFile.is_open())
		error_message("Failed to open the file");

	buffer << inputFile.rdbuf();
	inputFile.close();
	fileContent = buffer.str();
}

void	Replace::replaceAll()
{
	size_t	i = 0;

	while ((i = fileContent.find(s1, i)) != std::string::npos)
	{
		fileContent.replace(i, s1.length(), s2);
		i += s2.length();
	}
}

void	Replace::writeFile()
{
	std::ofstream	outputFile(outputFileName);

	if (!outputFile.is_open())
		error_message("Failed to create the output file");
	outputFile << fileContent;
	outputFile.close();
}

void	Replace::performReplacement()
{
	readFile();
	replaceAll();
	writeFile();
}
