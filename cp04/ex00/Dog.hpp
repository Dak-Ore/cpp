#pragma once

#include "Animal.hpp"

class Dog: public Animal
{
private:
public:
	Dog();
	Dog(const Dog &cpy);
	virtual ~Dog();
	Dog &operator=(const Dog &cpy);
	void makeSound() const;
};

