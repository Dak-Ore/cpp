/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 00:22:35 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/26 11:02:14 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::Cure( const Cure & src )
{
	*this = src;
}

Cure::~Cure()
{
}

Cure &Cure::operator=( Cure const & rhs )
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

Cure *Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
