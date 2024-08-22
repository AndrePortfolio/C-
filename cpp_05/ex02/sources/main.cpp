/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:32:24 by andre-da          #+#    #+#             */
/*   Updated: 2024/08/21 13:50:15 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

int main()
{
	srand(std::time(0));
	try
	{
		Bureaucrat	bob("Bob", 10);
		Bureaucrat	Alice("Alice", 30);

		PresidentialPardonForm	f1("f1");
		RobotomyRequestForm		f2("f2");
		ShrubberyCreationForm	f3("f3");

		std::cout << std::endl << bob << std::endl;
		std::cout << Alice << std::endl;
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;
		std::cout << f3 << std::endl;

		bob.signForm(f1);

		std::cout << std::endl << f1 << std::endl;

		Alice.executeFrom(f1);
		std::cout << std::endl;

		Alice.executeFrom(f2);
		std::cout << std::endl;

		Alice.signForm(f2);
		std::cout << std::endl;

		Alice.executeFrom(f2);
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
