#include <string>
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#pragma once

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon(std::string name);
		void	setType(std::string name);
		std::string	getType(void);
		~Weapon();
};

#endif