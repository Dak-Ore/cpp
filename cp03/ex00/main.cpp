/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 17:28:51 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/25 09:23:35 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
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

	return (0);
}