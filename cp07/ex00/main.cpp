/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 09:31:04 by rsebasti          #+#    #+#             */
/*   Updated: 2025/04/04 09:42:18 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void ) {
	{
		std::cout << "<< SUBJECT TEST >>" << std::endl;
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	{
		std::cout << std::endl << "<< MORE TEST >>" << std::endl;
		float fa = 2.4f;
		float fb = 4.2f;
		std::cout << "BEFORE: fa = " << fa << ", fb = " << fb << std::endl;
		::swap (fa, fb);
		std::cout << "AFTER: fa = " << fa << ", fb = " << fb << std::endl;
		std::cout << "Test min max with two equal value" << std::endl;
		fb = 4.2f;
		std::cout << "min( fa, fb ) = " << ::min( fa, fb ) << std::endl;
		std::cout << "max( fa, fb ) = " << ::max( fa, fb ) << std::endl;
	}
	{
		std::cout << std::endl << "<< Test with char >>" << std::endl;
		char c = 'c';
		char d = 'd';
		std::cout << "c = " << c << ", d = " << d << std::endl;
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;	
	}	

	// You can't have two different type or it can't compile
	// int	t = 5;
	// float f = 8;
	// ::swap (t,f);
return 0;

}