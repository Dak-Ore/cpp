#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <climits>
# include <cstdlib>
#include <iomanip>



class ScalarConverter
{
public:
	static void convert (std::string str);
private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter& other);
    ScalarConverter& operator=(const ScalarConverter& other);
    ~ScalarConverter();
};

#endif
