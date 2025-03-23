/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:27:35 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/23 14:48:27 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>
#include <cmath>


#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP

class ClapTrap
{
protected:
	std::string	name;
	unsigned int	hitPoint;
	unsigned int	energyPoint;
	unsigned int	attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string N);
	ClapTrap( ClapTrap &other);
	~ClapTrap();
	ClapTrap &operator=(ClapTrap &other);
	std::string getName(void);
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif