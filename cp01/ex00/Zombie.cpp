/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 11:34:33 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/07 11:53:24 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	zombieName = name;
}
Zombie::~Zombie()
{
	std::cout << "Zombie : " << zombieName << " has been destroyed" << std::endl;
}
void	Zombie::announce(void)
{
	std::cout << zombieName << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
