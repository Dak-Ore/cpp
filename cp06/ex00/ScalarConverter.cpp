#include "ScalarConverter.hpp"


enum kind
{
	NOPRINT = 0,
	PINF = 1,
	NINF = 2,
	NANF = 3,
	CHAR = 4,
	INT = 5,
	FLOAT = 6,
	DOUBLE = 7
};

// Default Constructor
ScalarConverter::ScalarConverter() {
    std::cout << "ScalarConverter default constructor called" << std::endl;
}

// Copy Constructor
ScalarConverter::ScalarConverter(const ScalarConverter& other) {
     *this = other;
}

// Copy Assignment Operator
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
    (void) other;
	return *this;
}

// Destructor
ScalarConverter::~ScalarConverter() {
    std::cout << "ScalarConverter destructor called" << std::endl;
}

int handle_exception(std::string str)
{
	if (str == "nan" || str == "nanf")
		return NANF;
	if (str == "+inf" || str == "+inff")
		return PINF;
	if (str == "-inf" || str == "-inff")
		return NINF;
	return -1;
}

int getType(std::string str)
{
	int res = handle_exception(str);
	if (res != -1)
		return res;
	size_t	len = str.length();
	if ((len == 1 && !isdigit(str[0])) || (len == 3 && str[0] == '\'' && str[2] == '\''))
		return CHAR;
	size_t dotpos = str.find('.');
	size_t fpos = str.find('f');
	if (fpos != std::string::npos && fpos != len - 1)
		return NOPRINT;
	int	has_sign = str[0] == '+' || str[0] == '-';
	size_t i = 0 + has_sign;
	if (dotpos == std::string::npos)
	{
		if (((has_sign && len > 11) || len > 12))
			return NOPRINT;
		while (str[i])
		{
			if (!isdigit(str[i]))
				return NOPRINT;
			i++;
		}
		return INT;
	}
	else
	{
		while (str[i])
		{
			if (!isdigit(str[i]) && i != dotpos && i != fpos)
				return NOPRINT;
			i++;
		}
		return fpos == std::string::npos ? DOUBLE : FLOAT;
	}
	return NOPRINT;
}

void convertChar(std::string str)
{
	size_t len = str.length();
	char c;
	if (len == 1)
		c = str[0];
	else
		c = str[1];
	if (isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char : not printable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void convertInt(std::string str)
{
	long i = std::atol(str.c_str());
	std::cout << "char: ";
	if (i < 0 || i > 127)
		std::cout << "impossible" << std::endl;
	else
	{
		if (isprint(i))
			std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
		else
			std::cout << "not printable" << std::endl;
	}
	std::cout << "int ";
	if (i < INT_MIN || i > INT_MAX)
		std::cout << "impossible" << std::endl;
	else
		std::cout << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void convertFloat(std::string str)
{
	float f = std::atof(str.c_str());
	long i = static_cast<long>(f);
	std::cout << "char: ";
	if (f < 0 || f > 127)
		std::cout << "impossible" << std::endl;
	else
	{
		if (isprint(f))
			std::cout << "'" << static_cast<char>(f) << "'" << std::endl;
		else
			std::cout << "not printable" << std::endl;
	}
	std::cout << "int ";
	if (i < INT_MIN || i > INT_MAX)
		std::cout << "impossible" << std::endl;
	else
		std::cout << i << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void ScalarConverter::convert (std::string str)
{
	int	type = getType(str);
	std::cout << std::fixed << std::setprecision((str.find('.') != std::string::npos) ? str.substr(str.find('.') + 1).size() : 1);
	switch (type)
	{
		case 0:
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
			break ;
		}
		case 1:
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: +inff" << std::endl;
			std::cout << "double: +inf" << std::endl;
			break;
		}
		case 2:
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: -inff" << std::endl;
			std::cout << "double: -inf" << std::endl;
			break;
		}
		case 3:
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: nanf" << std::endl;
			std::cout << "double: nan" << std::endl;
			break;
		}
		case 4:
			convertChar(str);
			break;
		case 5:
			convertInt(str);
			break;
		case 6:
			convertFloat(str);
			break;
		case 7:
			convertFloat(str);
			break;
		
	}
}