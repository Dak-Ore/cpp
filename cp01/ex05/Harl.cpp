/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:39:02 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/18 13:34:35 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}
Harl::~Harl(){}

void	Harl::debug()
{
	std::cout << DEBUG << std::endl;
}

void	Harl::info()
{
	std::cout << INFO << std::endl;
}

void	Harl::warning()
{
	std::cout << WARNING << std::endl;
}

void	Harl::error()
{
	std::cout << ERROR << std::endl;
}

void Harl::complain( std::string level )
{
	int	i;
	
	i = 0;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"}; 
	void (Harl::*fct[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	while (i < 4)
	{
		if (level == levels[i])
		{
			(this->*fct[i])();
			return;
		}
		i++;
	}
	std::cout << "Unknow level :" << level << std::endl;
}
