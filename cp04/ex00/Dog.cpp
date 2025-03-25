/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:02:41 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/25 10:36:30 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	this->type = "dog";
	std::cout << "Dog default constructor called" << std::endl;
}
Dog::Dog(const Dog &cpy): Animal(cpy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = cpy;
}
Dog::~Dog()
{
	std::cout << "Dog has been destroyed" << std::endl;
}
Dog &Dog::operator=(const Dog &cpy)
{
	this->type = cpy.type;

	return (*this);
}

void Dog::makeSound() const
{
	std::cout << this->getType() << ": Wouaaaaf" << std::endl;
}