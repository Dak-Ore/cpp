/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:19:52 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/07 15:27:01 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weaponType(weapon)
{
	humanName = name;
}
HumanA::~HumanA(){}

void	HumanA::attack(void)
{
	std::cout << humanName << " attacks with their " << weaponType.getType() << std::endl;	
}