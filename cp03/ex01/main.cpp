/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 17:28:51 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/23 15:04:21 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	{
		std::cout << " - ClapTrap Test - " << std::endl;
		ClapTrap one("One");
		one.takeDamage(10);
		one.takeDamage(10);
		ClapTrap two("Two");
		two.takeDamage(5);
		two.beRepaired(5);
		two.beRepaired(5);
		two.attack("something");
	}
	{
		std::cout << std::endl << " - ScavTrap TEST - " << std::endl;
		ScavTrap three("Three");
		three.guardGate();
		three.guardGate();
		three.takeDamage(5);
		three.beRepaired(5);
		three.attack("something");
		three.takeDamage(100);
		three.attack("something");
	}
	
	return (0);
}