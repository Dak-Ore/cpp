/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 09:31:04 by rsebasti          #+#    #+#             */
/*   Updated: 2025/04/03 09:57:25 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printInt(int & i)
{
	std::cout << i << std::endl;
}

void increment(int & i)
{
	i++;
}

int main( void ) 
{
	std::cout << "<< TESTING INT >>" << std::endl;
	int	i[] = {4, 2, 3, 5};
	iter(i, 4, increment);
	iter(i, 4, printInt);
return 0;

}