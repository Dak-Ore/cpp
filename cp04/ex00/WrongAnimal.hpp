#pragma once

#include <string>
#include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &cpy);
	virtual ~WrongAnimal();
	std::string getType() const;
	WrongAnimal &operator=(const WrongAnimal &cpy);
	void makeSound() const;
};

