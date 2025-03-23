/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 18:03:22 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/22 23:10:40 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string n): ClapTrap(n + "_clap_name")
{
	this->name = n;
	std::cout << "DiamondTrap " << n << " has been created" << std::endl;
	this->hitPoint = FragTrap::hitPoint;
	this->energyPoint = ScavTrap::energyPoint;
	this->attackDamage = FragTrap::attackDamage;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " has been destroyed " << std::endl;
}
DiamondTrap::DiamondTrap( DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << "DiamondTrap " << other.name << " has been copied" << std::endl;
	*this = other;
}
DiamondTrap &DiamondTrap::operator=(DiamondTrap &other)
{
	this->name = other.name;
	this->attackDamage = other.attackDamage;
	this->energyPoint = other.energyPoint;
	this->hitPoint = other.hitPoint;

	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I'm DiamondTrap " << this->name << " My ClapTrap name is : " << ClapTrap::name << std::endl;
}