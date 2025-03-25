#pragma once

#include <string>
#include <iostream>

class Brain
{
private:
	std::string ideas[100];
	unsigned int nbIdea;
public:
	Brain();
	Brain(const Brain &cpy);
	virtual ~Brain();
	std::string getIdea(unsigned int i) const;
	void addIdea(std::string idea);
	Brain &operator=(const Brain &cpy);
};

