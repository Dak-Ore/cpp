/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:46:25 by rsebasti          #+#    #+#             */
/*   Updated: 2025/02/18 23:20:38 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[i])
		{
			for (int y = 0; argv[i][y]; y++)
			{
				if (std::isalpha(argv[i][y]))
					std::cout << (char) std::toupper(argv[i][y]);
				else
					std::cout << argv[i][y];
			}
			i++;
		}
		std::cout << std::endl;
	}
}
