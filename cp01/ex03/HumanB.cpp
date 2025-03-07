/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:19:52 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/07 15:48:55 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	humanName = name;
}
HumanB::~HumanB(){}

void	HumanB::setWeapon(Weapon &weapon)
{
	weaponType = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << humanName << " attacks ";
	if (weaponType != NULL)
		std::cout << "with their " << weaponType->getType();
	std::cout << std::endl;
}