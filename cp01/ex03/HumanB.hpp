#pragma once
#include "Weapon.hpp"

#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB
{
	private:
		std::string	humanName;
		Weapon		*weaponType;
	public:
		HumanB(std::string name);
		~HumanB();
		void	setWeapon(Weapon &weapon);
		void	attack(void);
};

#endif