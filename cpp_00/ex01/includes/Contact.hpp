/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 20:17:13 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/09/11 15:45:54 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "header.h"

class Contact
{
	public:
		void	AddContact();
		void	GetShortContact(int i);
		void	GetLongContact();

	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;

		void	AddContactField(const std::string &prompt, std::string &field);
		void	TruncateContact(std::string &field);
};

#endif
