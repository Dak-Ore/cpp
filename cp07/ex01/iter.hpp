#include <iostream>
#include <cstdlib>

template <typename T>
void iter (T *adr, int length, void(*f)(T &))
{
	for (int i = 0; i < length; i++)
		f(adr[i]);
}