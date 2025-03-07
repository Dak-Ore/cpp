#pragma once
#include "Weapon.hpp"

#ifndef HUMANA_HPP
#define HUMANA_HPP

class HumanA
{
	private:
		std::string	humanName;
		Weapon		&weaponType;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack(void);
};

#endif