/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileReader.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 09:31:23 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/10 14:14:10 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileWritter.hpp"

#ifndef FILEREADER_HPP
#define FILEREADER_HPP

class fileReader
{
	private:
		std::string	fileName;
	public:
		fileReader(std::string name);
		~fileReader();
		void	read(std::string s1, std::string s2);
};

#endif 