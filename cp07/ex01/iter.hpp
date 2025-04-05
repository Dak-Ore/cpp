#include <iostream>
#include <cstdlib>
#include <string>

template <typename T>
void iter (T *adr, int length, void(*f)(T &))
{
	for (int i = 0; i < length; i++)
		f(adr[i]);
}

template <typename T>
void iter (T *adr, int length, void(*f)(const T &))
{
	for (int i = 0; i < length; i++)
		f(adr[i]);
}
