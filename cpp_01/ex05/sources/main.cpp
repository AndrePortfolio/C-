/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrealbuquerque <andrealbuquerque@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:16:52 by andrealbuqu       #+#    #+#             */
/*   Updated: 2024/07/10 12:07:37 by andrealbuqu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.h"

int	main(void)
{
	Harl	isHarl;

	isHarl.complain("debug");
	isHarl.complain("info");
	isHarl.complain("warning");
	isHarl.complain("error");
	isHarl.complain("unknown");
}
