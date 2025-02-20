/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:21:57 by rsebasti          #+#    #+#             */
/*   Updated: 2025/02/20 18:22:53 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include <stdlib.h>

int	main(void)
{
	Contact 	contact;
	Phonebook 	phonebook;
	std::string	line;
	int			num;

	while (1)
	{
		std::cout << "Enter a command : \nADD : to register a new contact in the phonebook\n";
		std::cout << "SEARCH: To list all contact then show the detail of the choosen contact\n";
		std::cout << "EXIT: To leave" << std::endl;
		std::getline(std::cin, line);
		if (line.compare("ADD") == 0)
			phonebook.addContact();
		else if (line.compare("SEARCH") == 0)
		{
			phonebook.showContactTab();
			std::cout << "Enter index of the choosen contact" << std::endl;
			std::getline(std::cin, line);
			num = atoi(line.c_str()) - 1;
			if (num >= 0 && num <= 7)
				phonebook.printContact(num);
			else
				std::cout << "Invalid index" << std::endl;
		}
		else if (line.compare("EXIT") == 0)
			break ;
		else
			std::cout << "Unknow command, please enter a valid command" << std::endl;
		std::cout << std::endl;
	}
	return (1);
}
