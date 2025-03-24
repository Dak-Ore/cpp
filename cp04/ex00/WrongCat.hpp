#pragma once

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
private:
public:
	WrongCat();
	WrongCat(const WrongCat &cpy);
	virtual ~WrongCat();
	WrongCat &operator=(const WrongCat &cpy);
};

