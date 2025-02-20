/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:48:01 by rsebasti          #+#    #+#             */
/*   Updated: 2025/02/20 18:06:17 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "main.hpp"
#include "iostream"
#include "iomanip"

class Phonebook
{
private:
	int	nbContact;
	Contact phonebook[8];
public:
	Phonebook();
	Contact getContact(int i);
	void addContact();
	void printContact(int i);
	void showContactTab();
};

#endif