#include <fstream>
#include <string>
#include <iostream>

#ifndef FIXED
# define FIXED

class Fixed
{
private:
	int	value;
	static int fract;
public:
	Fixed();
	Fixed(Fixed const &cpy);
	~Fixed();
	Fixed &operator=(const Fixed &other);
	int	getRawBits(void) const;
	void setRawBits (int const raw);
};


#endif