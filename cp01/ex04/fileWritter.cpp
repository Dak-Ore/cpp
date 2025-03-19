/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileWritter.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 09:31:39 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/10 14:19:41 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileWritter.hpp"

fileWritter::fileWritter(std::string name)
{
	fichier.open(name.append(".replace").c_str(), std::ofstream::out | std::ofstream::trunc);
	if (!fichier.is_open())
		std::cerr << "Error with the .replace file" << std::endl; 
}

fileWritter::~fileWritter()
{
	fichier.close();
}

void fileWritter::append(std::string content)
{
	fichier << content << std::endl;
}
		