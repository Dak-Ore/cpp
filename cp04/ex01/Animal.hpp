#pragma once

#include "Brain.hpp"
#include <string>
#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal &cpy);
	virtual ~Animal();
	std::string getType() const;
	Animal &operator=(const Animal &cpy);
	virtual void makeSound() const;
};

