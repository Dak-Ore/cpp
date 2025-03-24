#pragma once

#include "Animal.hpp"

class Cat: public Animal
{
private:
public:
	Cat();
	Cat(const Cat &cpy);
	virtual ~Cat();
	Cat &operator=(const Cat &cpy);
	void makeSound() const;
};

