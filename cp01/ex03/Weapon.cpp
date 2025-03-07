/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:47:57 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/07 15:35:39 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
Weapon::Weapon(std::string name)
{
	type = name;
}
Weapon::~Weapon(){}

void	Weapon::setType(std::string name)
{
	type = name;
}

std::string	Weapon::getType(void)
{
	return	(type);
}
