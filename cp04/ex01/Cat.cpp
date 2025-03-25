/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:02:41 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/25 10:44:34 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	this->type = "cat";
	brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}
Cat::Cat(const Cat &cpy): Animal(cpy)
{
	std::cout << "Cat default constructor called" << std::endl;
	*this = cpy;
}
Cat::~Cat()
{
	std::cout << "Cat has been destroyed" << std::endl;
	delete(brain);
}
Cat &Cat::operator=(const Cat &cpy)
{
	if (this != &cpy)
	{
		this->type = cpy.type;
		*this->brain = *cpy.brain;
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << this->getType() << ": Miaouu" << std::endl;
}

Brain *Cat::getBrain() const
{
	return (this->brain);
}