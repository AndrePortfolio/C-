/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:32:24 by andre-da          #+#    #+#             */
/*   Updated: 2024/08/19 16:26:40 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "libft.h"

class Animal;
class Brain;

class Dog : public Animal
{
	private:
		Brain	*brain;

	public:
		Dog();
		Dog(const Dog &copy);
		Dog& operator=(const Dog &other);
		~Dog();

	void	makeSound() const;
	Brain	*getBrain() const;
};

#endif
