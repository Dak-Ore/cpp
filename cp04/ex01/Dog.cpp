/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:02:41 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/25 10:36:26 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	this->type = "dog";
	brain = new Brain();
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
	delete(brain);
}
Dog &Dog::operator=(const Dog &cpy)
{
	if (this != &cpy)
	{
		this->type = cpy.type;
		this->brain = cpy.brain;
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << this->getType() << ": Wouaaaaf" << std::endl;
}

Brain *Dog::getBrain() const
{
	return (this->brain);
}