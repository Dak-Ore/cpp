/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:48:52 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/23 14:48:43 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->name = "default";
	this->attackDamage = 0;
	this->energyPoint = 10;
	this->hitPoint = 10;
}

ClapTrap::ClapTrap(std::string N)
{
	std::cout << "ClapTrap " << N << " has been created" << std::endl;
	this->name = N;
	this->attackDamage = 0;
	this->energyPoint = 10;
	this->hitPoint = 10;
}
ClapTrap::ClapTrap( ClapTrap &other)
{
	std::cout << "Copy constructor called on " << other.getName() << std::endl;
	*this = other;
}
	
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " has been destroyed " << std::endl;
}
ClapTrap &ClapTrap::operator=( ClapTrap &other)
{
	this->name = other.name;
	this->attackDamage = other.attackDamage;
	this->energyPoint = other.energyPoint;
	this->hitPoint = other.hitPoint;

	return (*this);
}

std::string ClapTrap::getName(void)
{
	return this->name;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hitPoint > 0 && this->energyPoint > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage !" << std::endl;	
		this->energyPoint--;
	}
	else if (this->hitPoint == 0)
		std::cout << "ClapTrap " << this->name << " cannot attack because he's dead" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " cannot attack because he have no energy point" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoint > amount)
		this->hitPoint -= amount;
	else if (this->hitPoint > 0)
		this->hitPoint = 0;
	else
	{
		std::cout << "ClapTrap " << this->name << " is already dead" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " take " << amount << " points of damage ! " << this->hitPoint << "HP left"<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoint > 0 && this->energyPoint > 0)
	{
		this->hitPoint += amount;
		this->energyPoint--;
		std::cout << "ClapTrap " << this->name << " has been repaired, he healed " << amount << " healh point ! He have "  << this->hitPoint << " HP now" << std::endl;
	}
	else if (this->hitPoint == 0)
		std::cout << "ClapTrap " << this->name << " is dead he can't be repaired" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " cannot repair because he have no energy point" << std::endl;
}