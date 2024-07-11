/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:14:30 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/07/11 11:49:43 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Harl_H
# define Harl_H

# include <iostream>
# include <string>
# include <cstring>
# include <algorithm>
# include "Harl.hpp"

# define RED "\x1b[31;1m"
# define GREEN "\x1b[32;1m"
# define BLUE "\x1b[34;1m"
# define CYAN "\x1b[36;1m"
# define YELLOW "\033[33;1m"
# define RESET "\x1b[0m"

void	    error_message(std::string str);
std::string toLowerCase(const std::string& str);
int         getLevelIndex(const std::string &level);

#endif
