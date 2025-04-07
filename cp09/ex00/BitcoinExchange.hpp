#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <string>
# include <algorithm>


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
private:
	std::map<std::string, double> map;
};

#endif
