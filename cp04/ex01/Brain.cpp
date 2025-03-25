/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 22:26:42 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/25 10:45:00 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &cpy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = cpy;
}
Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}
std::string Brain::getIdea(unsigned int i) const
{
	if (i < 100)
	{
		if (!this->ideas[i].empty())
			return (this->ideas[i]);
		return "EMPTY";
	}
	std::cerr << "Can't get this idea ! (i need to be < 100)" << std::endl;
	return ("NULL");
}

void Brain::addIdea(std::string idea)
{
	int	i;

	i = 0;
	while (i < 100 && !this->ideas[i].empty())
		i++;
	if (i == 100)
		std::cerr << "Can't add more idea ! (100 max)" << std::endl;
	this->ideas[i] = idea;
}
	
Brain &Brain::operator=(const Brain &cpy)
{
	if (this != &cpy)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = cpy.ideas[i];
	}

	return (*this);
}