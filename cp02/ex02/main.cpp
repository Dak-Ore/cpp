#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	
	std::cout << "Increment / decrement" << std::endl;
	std::cout << a << std::endl;
	std::cout << "++a : " << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << "a++ : " << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << a << std::endl;
	std::cout << "--a : " << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << "a--: " << a-- << std::endl;
	std::cout << a << std::endl <<std::endl;

	std::cout << "Operator" << std::endl;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "* : " << b << std::endl;
	Fixed const c( Fixed( 5.05f ) + Fixed( 2 ) );
	std::cout << "+ : " << c << std::endl;
	Fixed const d( Fixed( 5.05f ) - Fixed( 2 ) );
	std::cout << "- : " << d << std::endl;
	Fixed const e( Fixed( 5.05f ) / Fixed( 2 ) );
	std::cout << "/ : " << e << std::endl;

	std::cout << std::endl << "Min - Max:" << std::endl;
	std::cout <<  "Max :" << Fixed::max( a, b ) << std::endl;
	std::cout << "Min :" << Fixed::min( a, b ) << std::endl;
	Fixed const g1(3.14f);
	Fixed const g2(2.71f);
	std::cout << "Const Min: " << Fixed::min(g1, g2) << std::endl;
	std::cout << "Const Max: " << Fixed::max(g1, g2) << std::endl;


	std::cout << std::endl << "compare:" << std::endl;
	Fixed f1(10);
	Fixed f2(42.42f);

	std::cout << "f1 == f2 : " << (f1 == f2) << std::endl;
	std::cout << "f1 != f2 : " << (f1 != f2) << std::endl;
	std::cout << "f1 < f2  : " << (f1 < f2) << std::endl;
	std::cout << "f1 > f2  : " << (f1 > f2) << std::endl;
	std::cout << "f1 <= f2 : " << (f1 <= f2) << std::endl;
	std::cout << "f1 >= f2 : " << (f1 >= f2) << std::endl;

	return 0;
}