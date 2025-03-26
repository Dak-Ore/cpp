/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 00:22:38 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/26 10:01:47 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice( const Ice & src)
{
	*this = src;
}

Ice::~Ice()
{
}

Ice &Ice::operator=( Ice const & rhs )
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

Ice *Ice::clone() const
{
	return (new Ice);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}