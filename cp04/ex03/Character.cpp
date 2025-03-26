/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 00:22:32 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/26 11:35:59 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character()
{
	this->_name = "default";
	for (int i = 0; i < INVENTORY_SLOT; i++)
		this->_inventory[i] = NULL; 
}

Character::Character(std::string name)
{
	this->_name = name;
	for (int i = 0; i < INVENTORY_SLOT; i++)
		this->_inventory[i] = NULL; 
}

Character::Character( const Character & src )
{
	*this = src;
}

Character::~Character()
{
	for (int i = 0; i < INVENTORY_SLOT; i++)
		if (this->_inventory[i])
			delete(this->_inventory[i]);
}

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		for (int i = 0; i < INVENTORY_SLOT; i++)
		{
			if (rhs._inventory[i])
				this->_inventory[i] = rhs._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return *this;
}

std::string const &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	int i = 0;
	while (i < INVENTORY_SLOT && this->_inventory[i])
		i++;
	if (i < INVENTORY_SLOT)
	{
		std::cout << "* " << this->_name << " equipped a " << m->getType() << " *" << std::endl;
		this->_inventory[i] = m;
		return ;
	}
	std::cout << this->_name << ": my inventory is full" << std::endl;
}
void Character::unequip(int idx)
{
	if (idx < 0 || idx >= INVENTORY_SLOT)
		std::cout << this->_name << ": I can't access to this inventory slot" << std::endl;
	else if (this->_inventory[idx])
	{
		std::cout << "* " << this->_name << " just dropped a " <<  this->_inventory[idx]->getType() << " *" << std::endl;
		this->_inventory[idx] = NULL;
	}
	else 
		std::cout << this->_name << ": I have nothing there" << std::endl;
}
void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= INVENTORY_SLOT)
		std::cout << this->_name << ": I can't access to this inventory slot" << std::endl;
	else if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else 
		std::cout << this->_name << ": I have nothing there" << std::endl;	
}