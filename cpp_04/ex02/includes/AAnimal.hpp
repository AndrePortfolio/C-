/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:32:24 by andre-da          #+#    #+#             */
/*   Updated: 2024/08/19 15:40:46 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include "libft.h"

class AAnimal
{
	protected:
		std::string	type;

	public:
		AAnimal();
		AAnimal(const AAnimal &copy);
		AAnimal& operator=(const AAnimal &other);
		virtual ~AAnimal();

		virtual void	makeSound() const = 0;
		std::string	getType() const;
};

#endif
