/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 21:35:16 by rsebasti          #+#    #+#             */
/*   Updated: 2025/02/20 18:26:20 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook() 
{
	nbContact = 0;
}

Contact Phonebook::getContact(int i)
{
	return (phonebook[i]);
}

void	Phonebook::addContact()
{
	std::string	first;
	std::string	last;
	std::string	nick;
	std::string	phone;
	std::string	dark;

	std::cout << "Please enter contact first name:\n> ";
	std::getline(std::cin, first);
	if (std::cin.eof())
		return ;
	std::cout << "Please enter contact last name:\n> ";
	std::getline(std::cin, last);
	if (std::cin.eof())
		return ;
	std::cout << "Please enter contact nick name:\n> ";
	std::getline(std::cin, nick);
	if (std::cin.eof())
		return ;
	std::cout << "Please enter contact phone number:\n> ";
	std::getline(std::cin, phone);
	if (std::cin.eof())
		return ;
	std::cout << "Please enter contact darkest secret:\n> ";
	std::getline(std::cin, dark);
	if (std::cin.eof())
		return ;
	phonebook[nbContact % 8].setContact(first, last, nick, phone, dark);	
	nbContact++;
}

void	Phonebook::showContactTab()
{
	std::string	first;
	std::string last;
	std::string nick;

	std::cout << std::setw(10) << "Index" << "|" << "First Name"  << "|";
	std::cout << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nick Name" << "|" << std::endl;
	for (int i = 0; i <= 7; i++)
	{
		first = phonebook[i].getFirstName();
		if (first.size() >= 10)
		{
			first.resize(9);
			first.resize(10,'.');
		}
		last = phonebook[i].getLastName();
		if (last.size() >= 10)
		{
			last.resize(9);
			last.resize(10,'.');
		}
		nick = phonebook[i].getNickName();
		if (nick.size() >= 10)
		{
			nick.resize(9);
			nick.resize(10,'.');
		}
		std::cout << std::setw(10) << i + 1 << "|" << std::setw(10) << first  << "|";
		std::cout << std::setw(10) << last << "|" << std::setw(10) << nick << "|" << std::endl;
	}
}

void	Phonebook::printContact(int i)
{
	std::cout << "First Name: " << phonebook[i].getFirstName() << std::endl;
	std::cout << "Last Name: " << phonebook[i].getLastName() << std::endl;
	std::cout << "Nick Name: " << phonebook[i].getNickName() << std::endl;
	std::cout << "Phone Number: " << phonebook[i].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << phonebook[i].getDarkest() << std::endl;
}
