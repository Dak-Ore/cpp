/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:58:15 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/20 15:03:49 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::fract = 8;

Fixed::Fixed()
{
	value = 0;
}

Fixed::Fixed(Fixed const &cpy)
{
	*this = cpy;
}

Fixed::Fixed(int val)
{
	this->value = val << fract;
}
Fixed::Fixed(float val)
{
	this->value = roundf(val * (1 << fract));
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(const Fixed &other)
{
	this->value = other.getRawBits();

	return (*this);
}

int Fixed::getRawBits( void ) const
{
	return (this->value);
}

void Fixed::setRawBits (int const raw)
{
	this->value = raw;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fx)
{
    os << fx.toFloat();  
    return os;  
}

int	Fixed::toInt(void) const
{
	return this->value >> fract;
}

float Fixed::toFloat(void) const
{
	return ((float) this->value / (float)(1 << fract));
}

Fixed Fixed::operator+(const Fixed &other)
{
	Fixed result;
	result.setRawBits ((this->value + other.getRawBits()) >> fract);
	return result;
}

Fixed Fixed::operator-(const Fixed &other)
{
	Fixed result;
	result.setRawBits ((this->value - other.getRawBits()) >> fract);
	return result;
}

Fixed Fixed::operator/(const Fixed &other)
{
	Fixed result;
	result.setRawBits ((this->value / other.getRawBits()) >> fract);
	return result;
}

Fixed Fixed::operator*(const Fixed &other)
{
	Fixed result;
	result.setRawBits ((this->value * other.getRawBits()) >> fract);
	return result;
}


Fixed Fixed::operator++()
{
	++this->value;
	return *this;
}
Fixed Fixed::operator--()
{
	--this->value;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++*this;
	return temp;
}
Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--*this;
	return temp;
}
