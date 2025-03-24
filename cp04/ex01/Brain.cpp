/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 22:26:42 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/23 22:30:44 by rsebasti         ###   ########.fr       */
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
	std::string getIdea(unsigned int i) const;
	void addIdea(unsigned int i);
	Brain &operator=(const Brain &cpy);