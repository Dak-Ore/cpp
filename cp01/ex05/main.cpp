/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 12:05:54 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/19 13:30:26 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	test;

	std::cout << "DEBUG" << std::endl;
	test.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "INFO" << std::endl;
	test.complain("INFO");
	std::cout << std::endl;
	
	std::cout << "WARNING" << std::endl;
	test.complain("WARNING");
	std::cout << std::endl;

	std::cout << "ERROR" << std::endl;
	test.complain("ERROR");
	std::cout << std::endl;

	std::cout << "INCORRECT" << std::endl;
	test.complain("INCORRECT");
	std::cout << std::endl;
}