#pragma once

#include <string>
#include <iostream>

class Brain
{
protected:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain &cpy);
	virtual ~Brain();
	std::string getIdea(unsigned int i) const;
	void addIdea(unsigned int i);
	Brain &operator=(const Brain &cpy);
};

