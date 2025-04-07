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
        // Copy attributes here
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
		if (isBisextile && day > 29)
			return (0);
		else if (day > 28)
			return (0);
	}
	else if (day > 31)
		return (0);
	return (1);
}

