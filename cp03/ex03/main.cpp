/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 17:28:51 by rsebasti          #+#    #+#             */
/*   Updated: 2025/04/03 14:24:34 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

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
	{
		std::cout << std::endl << " - FragTrap TEST - " << std::endl;
		FragTrap four("Four");
		four.highFivesGuys();
		four.takeDamage(5);
		four.beRepaired(5);
		four.attack("something");
		four.takeDamage(101);
		four.attack("something");
	}
	{
		std::cout << std::endl << " - DiamondTrap TEST - " << std::endl;
		DiamondTrap five("Five");
		five.whoAmI();
		five.attack("something new");
		five.whoAmI();	
	}
	
	return (0);
}