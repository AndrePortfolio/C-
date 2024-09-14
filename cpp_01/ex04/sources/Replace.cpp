/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 18:48:33 by andre-da          #+#    #+#             */
/*   Updated: 2024/07/11 12:00:13 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Replace.hpp"

Replace::Replace(std::string& inputFileName, std::string& s1, std::string& s2)
{
	this->inputFileName = inputFileName;
	this->s1 = s1;
	this->s2 = s2;
	this->outputFileName = inputFileName + ".replace";
}

void	Replace::readFile()
{
	std::ifstream		inputFile(inputFileName.c_str());
	std::stringstream	buffer;

	if (!inputFile.is_open())
		error_message("Failed to open the file");

	buffer << inputFile.rdbuf();
	inputFile.close();
	fileContent = buffer.str();
}

void	Replace::replaceAll()
{
	std::string	result;
	size_t		i = 0;
	size_t		pos;

	while ((pos = fileContent.find(s1, i)) != std::string::npos)
	{
		result.append(fileContent, i, pos - i);
		result.append(s2);
		i = pos + s1.length();
	}
	result.append(fileContent, i, std::string::npos);
	fileContent = result;
}

void	Replace::writeFile()
{
	std::ofstream	outputFile(outputFileName.c_str());

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
