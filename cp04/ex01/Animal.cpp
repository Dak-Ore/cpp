/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 15:56:11 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/25 10:18:48 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("default")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &cpy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = cpy;
}
Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}
Animal &Animal::operator=(const Animal &cpy)
{
	if (this != &cpy)
		this->type = cpy.type;	
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Default animal don't make sound" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}