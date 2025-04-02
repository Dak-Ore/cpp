/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 22:40:57 by rsebasti          #+#    #+#             */
/*   Updated: 2025/04/02 23:54:16 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		std::cerr << "usage : ./convert <literal>" << std::endl;
		return (1);	
	}	
	ScalarConverter::convert(argv[1]);
	return (0);
}
