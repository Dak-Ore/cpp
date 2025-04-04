#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"

// Default Constructor
template <class T>
Array<T>::Array()
{
	this->elements = NULL;
	this->esize = 0;
}

template <class T>
Array<T>::Array(unsigned int size)
{
	this->elements = new T[size]();
	esize = size;
}

// Copy Constructor
template <class T>
Array<T>::Array(const Array& other) : elements(new T[other.esize]()), esize(other.esize)
{
    for (unsigned int i = 0; i < this->esize ;i++)
		this->elements[i] = other.elements[i];
}

// Copy Assignment Operator
template <class T>
Array<T>& Array<T>::operator=(const Array& other) {
    if (this != &other) {
		delete [] this->elements;
		this->esize = other.size();
        this->elements = new T[other.size()];
		for (unsigned int i = 0; i < this->esize ;i++)
			this->elements[i] = other.elements[i];
    }
    return *this;
}

template <class T>
T Array<T>::operator[](size_t index) const {
	if (index < 0 || index >= this->esize )
		throw Array<T>::IndexOutOfBounds();
	else
		return elements[index];
}

template <class T>
T &Array<T>::operator[](size_t index) {
	if (index < 0 || index >= this->esize )
		throw Array<T>::IndexOutOfBounds();
	else
		return elements[index];
}

template <class T>
unsigned int Array<T>::size() const
{
	return (this->esize);
}
// Destructor
template <class T>
Array<T>::~Array() {
	delete[] this->elements;
}

template <class T>
const char *Array<T>::IndexOutOfBounds::what() const throw()
{
	return ("Index out of bounds");
}

#endif