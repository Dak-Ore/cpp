/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 11:32:04 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/07 13:50:55 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#pragma once

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
	private:
		std::string	zombieName;
	public:
		Zombie(std::string name);
		Zombie();
		void	setZombieName(std::string name);
		~Zombie();
		void	announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif