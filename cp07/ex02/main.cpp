#include <iostream>
#include "Array.hpp"
#include <stdlib.h>

#define MAX_VAL 750
#define DECENT_VAL 10

template <typename T>
void	printArray(Array<T> a, int nbval)
{
	for (int i = 0; i < nbval; i++)
		std::cout << a[i] << " ";
}

int subjectTest(void)
{
	std::cout << "<< SUBJECT TEST >>" << std::endl;
	Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
	return 0;
}

int main(int , char**)
{
    {
		subjectTest();
	}
	{
		std::cout << "<< My test >>" << std::endl;
		Array<int> numbers(DECENT_VAL);
		srand(time(NULL));
		for (int i = 0; i < DECENT_VAL; i++)
		{
			const int value = rand() % 100;
			numbers[i] = value;
		}
		Array<int> copy = numbers;
		std::cout << "BEFORE:" << std::endl << "numbers : ";
		printArray(numbers, DECENT_VAL);
		std::cout << std::endl;

		std::cout << "copy    : ";
		printArray(copy, DECENT_VAL);
		std::cout << std::endl;
		copy[5] = 42;

		std::cout << "copy[5] = 42" << std::endl << "numbers : ";
		printArray(numbers, DECENT_VAL);
		std::cout << std::endl;

		std::cout << "copy    : ";
		printArray(copy, DECENT_VAL);
		std::cout << std::endl;

		numbers[0] = 42;

		std::cout << "numbers[0] = 42" << std::endl << "numbers : ";
		printArray(numbers, DECENT_VAL);
		std::cout << std::endl;

		std::cout << "copy    : ";
		printArray(copy, DECENT_VAL);
		std::cout << std::endl;
	}
	{
		std::cout << std::endl << "<< UNITIALIZED ARRAY >>" << std::endl;
		Array<int> ar(10);
		std::cout << "ar : ";
		printArray(ar, DECENT_VAL);
		std::cout << std::endl;
		int * a = new int();
		std::cout << *a << std::endl;
	}
    return 0;
}