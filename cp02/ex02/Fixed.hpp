#include <fstream>
#include <string>
#include <iostream>
#include <cmath>

#ifndef FIXED
# define FIXED

class Fixed
{
private:
	int	value;
	static int fract;
public:
	Fixed();
	Fixed(int val);
	Fixed(float val);
	Fixed(Fixed const &cpy);
	~Fixed();
	Fixed &operator=(const Fixed &other);
	int	getRawBits(void) const;
	void setRawBits (int const raw);
	int	toInt(void) const;
	float toFloat(void) const;

	Fixed operator+(const Fixed &other);
	Fixed operator-(const Fixed &other);
	Fixed operator/(const Fixed &other);
	Fixed operator*(const Fixed &other);

	bool operator<=(const Fixed &other);
	bool operator!=(const Fixed &other);
	bool operator==(const Fixed &other);
	bool operator>=(const Fixed &other);
	bool operator<(const Fixed &other);
	bool operator>(const Fixed &other);

	Fixed operator++(int);
	Fixed operator--(int);

	Fixed operator++();
	Fixed operator--();

	Fixed static &min(Fixed &left, Fixed &right);
	Fixed static &max(Fixed &left, Fixed &right);
	Fixed static const &min(const Fixed &left, const Fixed &right);
	Fixed static const &max(const Fixed &left, const Fixed &right);

};

std::ostream &operator<<(std::ostream &os, const Fixed &fx);

#endif