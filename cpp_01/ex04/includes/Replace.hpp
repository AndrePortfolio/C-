/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:15:41 by andre-da          #+#    #+#             */
/*   Updated: 2024/07/11 12:00:17 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include "Replace.h"

class Replace
{
	private:
		std::string inputFileName;
		std::string	outputFileName;
		std::string	s1;
		std::string	s2;
		std::string	fileContent;

		void	readFile();
		void	replaceAll();
		void	writeFile();

	public:
		Replace(std::string& inputFileName, std::string& s1, std::string& s2);
		void	performReplacement();
};

#endif
