#pragma once

#include "Animal.hpp"

class Cat: public Animal
{
private:
	Brain	*brain;
public:
	Cat();
	Cat(const Cat &cpy);
	virtual ~Cat();
	Cat &operator=(const Cat &cpy);
	void makeSound() const;
	Brain getBrain() const;
};

