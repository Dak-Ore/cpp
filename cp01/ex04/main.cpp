/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 09:24:00 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/19 10:54:49 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileReader.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "usage: ./replace file str str_to_replace" << std::endl;
		return (1);	
	}
	fileReader	reader(argv[1]);
	reader.read(argv[2], argv[3]);
	return (0);
}