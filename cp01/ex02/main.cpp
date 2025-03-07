/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 11:44:21 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/07 14:25:36 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Address of string : " << &string << std::endl;
	std::cout << "Address of pointer : " << stringPTR << std::endl;
	std::cout << "Address of reference : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Value of string : " << string << std::endl;
	std::cout << "Value of pointer : " << *stringPTR << std::endl;
	std::cout << "Value of reference : " << stringREF << std::endl;
}
