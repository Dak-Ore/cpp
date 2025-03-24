/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:02:41 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/23 22:03:38 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}
WrongCat::WrongCat(const WrongCat &cpy): WrongAnimal(cpy)
{
	*this = cpy;
}
WrongCat::~WrongCat()
{
	std::cout << "WrongCat has been destroyed" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat &cpy)
{
	this->type = cpy.type;

	return (*this);
}
