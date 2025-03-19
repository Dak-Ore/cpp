/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 09:24:00 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/10 10:24:56 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileReader.hpp"

int	main(int argc, char **argv)
{
	if (argc < 4)
		return (1);
	fileReader	reader(argv[1]);
	reader.read(argv[2], argv[3]);
	return (0);
}