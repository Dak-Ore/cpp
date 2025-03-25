/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 15:56:11 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/23 16:33:37 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("default")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = cpy;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &cpy)
{
	if (this != &cpy)
		this->type = cpy.type;

	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << this->type << ": Wrong !" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}