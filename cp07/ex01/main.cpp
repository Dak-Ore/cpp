/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 09:31:04 by rsebasti          #+#    #+#             */
/*   Updated: 2025/04/04 09:44:55 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// Normal function
void	intAddPrev(int & i)
{
	static int prev = 0;
	i += prev;
	prev = i;	
}

// instancied function template
template <typename T>
void print(T & i)
{
	std::cout << i << std::endl;
}

template <typename T>
void increment(T & i)
{
	i++;
}

template <typename T>
void printOnLine(T & i)
{
	std::cout << i << " ";
}

template <typename T>
void compare(T & i)
{
	static T & prev = i;
	std::cout << i << " is ";
	if (prev == i)
		std::cout << "equal" << std::endl;
	else
		std::cout << (i < prev ? "<" : ">") << std::endl; 
	prev = i;
}

int main( void ) 
{
	std::cout << "<< TESTING INT WITH INT FUNCTION >>" << std::endl;
	int	i[] = {4, 2, 3, 5};
	iter(i, 4, intAddPrev);
	iter(i, 4, print);
	std::cout << std::endl << "<< TESTING WITH TEMPLATE FUNCTION >>" << std::endl;
	iter(i, 4, increment);
	iter(i, 4, print);
	std::cout << std::endl << "<< TESTING WITH TEMPLATE FUNCTION WITH STATIC PARAMETER >>" << std::endl;
	iter(i, 4, compare);
	std::cout << "<< TESTING ITER WITH SIZE - 1 >>" << std::endl;
	iter(i, 3, print);
	// VALGRIND ERROR BECAUSE UNITIALIZED
	// std::cout << "<< TESTING ITER WITH SIZE + 1 >>" << std::endl;
	// iter(i, 5, printInt);

	std::cout << std::endl << "<< TESTING STRING >>" << std::endl;
	std::string tabStr[] = {"Ceci", "est", "un", "test"};
	iter(tabStr, 4, print);
	iter(tabStr, 4, printOnLine);
	std::cout << std::endl;
	// With different type it reinitialize static var
	iter(tabStr, 4, compare);

	std::cout << std::endl << "<< TESTING FLOAT >>" << std::endl;
	float f[] = {5.5f, 4.2f, 5.059f, 5.098f};
	iter(f, 4, print);
	iter(f, 4, printOnLine);
	std::cout << std::endl;
	
return 0;

}