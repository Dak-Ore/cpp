/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 12:05:54 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/19 13:34:47 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int c, char ** v)
{
	Harl	test;

	if (c != 2)
		std::cout << "usage: ./harlFilter <level>" << std::endl;
	else
		test.complain(v[1]);

	return (0);
}