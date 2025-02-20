/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 23:32:53 by rsebasti          #+#    #+#             */
/*   Updated: 2025/02/19 18:34:30 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
	public:
		Contact();
		void setContact(std::string fName, std::string lName, std::string nName, std::string phone, std::string darkest);
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getPhoneNumber();
		std::string	getNickName();
		std::string	getDarkest();
};


#endif