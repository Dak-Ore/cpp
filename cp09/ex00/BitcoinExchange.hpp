#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <string>
# include <algorithm>
# include <fstream>


class BitcoinExchange
{
public:
    // Default Constructor
    BitcoinExchange();
    
    // Copy Constructor
    BitcoinExchange(const BitcoinExchange& other);
    
    // Copy Assignment Operator
    BitcoinExchange& operator=(const BitcoinExchange& other);
    
    // Destructor
    ~BitcoinExchange();

	void readData(std::string file);
	void readInput(std::string file);
	void findNearest(std::string date, float value);
private:
	std::map<std::string, float> data;
};

#endif
