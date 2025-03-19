/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileReader.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 09:30:37 by rsebasti          #+#    #+#             */
/*   Updated: 2025/03/19 10:54:29 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileReader.hpp"

fileReader::fileReader(std::string name)
{
	fileName = name;
}
fileReader::~fileReader(){}

static	std::string	replaceLine(std::string line, std::string s1, std::string s2)
{
	std::string newLine;
	int			oldpos = 0;
	int			pos = 0;
	
	pos = line.find(s1, pos);
	if (pos != -1)
	{
		while (pos != -1)
		{
			newLine.append(line, oldpos, pos - oldpos);
			newLine.append(s2);
			pos += (int) s1.length();
			oldpos = pos;
			pos = line.find(s1, pos);
		}
		if (oldpos < (int) line.length())
			newLine.append(line, oldpos , line.npos);
		return (newLine);
	}
	else
	{
		return (line);
	}
}

void	fileReader::read(std::string s1, std::string s2)
{
	std::ifstream fileRead(fileName.c_str(), std::ios::in);
	std::string	line;

	if (fileRead)
	{
	fileWritter	newFile(fileName);
		while (fileRead.good())
		{
			std::getline(fileRead, line);
			newFile.append(replaceLine(line, s1, s2));
		}
		fileRead.close();
	}
	else
		std::cerr << "Cannot open file" << std::endl;
}


