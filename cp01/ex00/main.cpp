/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 11:44:21 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/07 12:12:19 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie	*newZombie(std::string name);

int	main(void)
{
	Zombie	*newZomb = newZombie("Mark");
	
	newZomb->announce();
	randomChump("Francis");
	delete(newZomb);
	return (0);
}
