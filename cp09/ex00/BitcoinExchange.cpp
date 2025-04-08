#include "BitcoinExchange.hpp"

// Default Constructor
BitcoinExchange::BitcoinExchange() {
}

// Copy Constructor
BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {
    *this = other;
}

// Copy Assignment Operator
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
    if (this != &other) {
        this->data = other.data;
    }
    return *this;
}

// Destructor
BitcoinExchange::~BitcoinExchange() {
}

bool isBisextile(int year)
{
	return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

bool isCorrect(std::string date)
{
	if (date.length() != 10 || date[4] != '-' || date[7] != '-')
		return (0);
	for (int i = 0; i < 4; i++)
		if (!isdigit(date[i]))
			return (0);
	for (int i = 5; i < 7; i++)
		if (!isdigit(date[i]))
			return (0);
	for (int i = 8; i < 10; i++)
		if (!isdigit(date[i]))
			return (0);
	int year = atoi(date.substr(0, 4).c_str());
	if (year < 1)
		return (0);
	int month = atoi(date.substr(5, 2).c_str());
	if (month > 12 || month < 1)
		return (0);
	int day = atoi(date.substr(8, 2).c_str());
	if (day < 1)
		return (0);
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return (0);
	else if(month == 2)
	{
		if (isBisextile(year) && day > 29)
			return (0);
		else if (!isBisextile(year) && day > 28)
			return (0);
	}
	else if (day > 31)
		return (0);
	return (1);
}

void BitcoinExchange::readData(std::string file)
{
	std::ifstream fileRead(file.c_str(), std::ios::in);
	std::string	line;

	if (fileRead)
	{
		std::getline(fileRead, line);
		while (fileRead.good())
		{
			std::getline(fileRead, line);
			if (!line.empty())
			{
				std::string date = line.substr(0, 10); 
				float value = atof(line.substr(line.find(',') + 1, line.length() - line.find(',') + 1).c_str());
				if (!isCorrect(date))
					std::cerr << "Error : bad input => " << date << std::endl;
				else if (value < 0)
					std::cerr << "Error : not a positive number. " << std::endl;
				else
					this->data.insert(std::pair<std::string, float>(date, value));
			}
					}
		fileRead.close();
	}
	else
		std::cerr << "Cannot open file" << std::endl;
}

void BitcoinExchange::findNearest(std::string date, float value)
{
	for (std::map<std::string, float>::iterator it = this->data.begin() ; it != this->data.end(); it++)
	{
		if (it->first > date)
		{
			if (it == data.begin())
			{
				std::cerr << "Error: no input for this data" << std::endl;
				return ;
			}
			else
			{
				it--;
				std::cout << date << " => " << value << " = " << value*it->second << std::endl;
				return ;
			}
		}
	}
}

void BitcoinExchange::readInput(std::string file)
{
	std::ifstream fileRead(file.c_str(), std::ios::in);
	std::string	line;

	if (fileRead)
	{
		std::getline(fileRead, line);
		while (fileRead.good())
		{
			std::getline(fileRead, line);
			if (!line.empty())
			{
				std::string date = line.substr(0, 10); 
				float value = atof(line.substr(line.find('|') + 2, line.length() - line.find('|') + 2).c_str());
				if (!isCorrect(date))
					std::cerr << "Error : bad input => " << date << std::endl;
				else if (value < 0)
					std::cerr << "Error : not a positive number. " << std::endl;
				else if (value > 1000)
					std::cerr << "Error: too large a number." << std::endl;
				else
					findNearest(date, value);
			}
		}
		fileRead.close();
	}
	else
		std::cerr << "Cannot open file" << std::endl;
}

int main(int c, char const **v)
{
	if (c < 2)
		std::cerr << "Error: could not open file." << std::endl;
	else
	{
		BitcoinExchange btc;
		btc.readData("data.csv");
		btc.readInput(v[1]);
	}

	return 0;
}