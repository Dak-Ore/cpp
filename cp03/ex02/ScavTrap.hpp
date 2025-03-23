/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 17:58:52 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/23 14:48:56 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
	bool guarding;
public:
	ScavTrap();
	ScavTrap(std::string n);
	~ScavTrap();
	ScavTrap( ScavTrap &other);
	ScavTrap &operator=(ScavTrap &other);
	void	guardGate();
	void	attack(const std::string& target);
};

