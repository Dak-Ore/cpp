/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 10:49:38 by rsebasti          #+#    #+#             */
/*   Updated: 2025/02/19 22:23:37 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

void Contact::setContact(std::string fName, std::string lName, std::string nName, std::string phone, std::string darkest)
{
	firstName = fName;
	lastName = lName;
	nickName = nName;
	phoneNumber = phone;
	darkestSecret = darkest;
}

std::string	Contact::getFirstName()
{
	return (firstName);
}

std::string	Contact::getLastName()
{
	return (lastName);
}
std::string	Contact::getPhoneNumber()
{
	return (phoneNumber);
}
std::string	Contact::getNickName()
{
	return (nickName);
}

std::string	Contact::getDarkest()
{
	return (darkestSecret);
}