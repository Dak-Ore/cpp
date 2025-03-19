/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileWritter.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 09:31:35 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/10 14:13:58 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>
#pragma once

#ifndef FILEWRITTER_HPP
#define FILEWRITTER_HPP

class fileWritter
{
	private:
		std::ofstream fichier;
	public:
		fileWritter(std::string name);
		~fileWritter();
		void append(std::string content);
};

#endif 