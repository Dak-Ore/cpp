/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 00:22:29 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/26 00:22:30 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
}

AMateria::AMateria( const AMateria & src )
{
	*this = src;
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType() const
{
	return this->_type;
}

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
	}
	return *this;
}
