#include "easyfind.hpp"
#include <vector>
#include <list>

#define NBVAL 10

int main(int, char const **)
{
	std::vector<int> v;

	srand(time(NULL));
	for (int i = 0; i < NBVAL; i++)
		v.push_back(10 + i);
	// Check if 17 exist in a vector 10-20
	std::vector<int>::iterator it = easyfind(v, 17);
	std::cout << "found: " << *it << " at pos: " << std::distance(v.begin(), it) << std::endl;
	// Checking if 42 is in vector 10-20
	// Excepted `value not in container`
	try
	{
		it = easyfind(v, 42);
		std::cout << "NO" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::list<int> lst;
	for (int i = 0; i < NBVAL; i++)
		lst.push_back(10 + i);
	// Check if 17 exist in a vector 10-20
	std::list<int>::iterator itl = easyfind(lst, 17);
	std::cout << "found: " << *itl << std::endl;
	// Checking if 42 is in list 10-20
	// Excepted `value not in container`
	try
	{
		itl = easyfind(lst, 42);
		std::cout << "NO" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
