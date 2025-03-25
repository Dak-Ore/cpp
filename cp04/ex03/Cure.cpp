/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 00:22:35 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/26 00:40:52 by rsebasti         ###   ########.fr       */
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

Cure &				Cure::operator=( Cure const & rhs )
{
	this->_type = rhs._type;
	return *this;
}

