#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

#include "MutantStack.hpp"

// Default Constructor
template <class T>
MutantStack<T>::MutantStack() {
}

// Copy Constructor
template <class T>
MutantStack<T>::MutantStack(const MutantStack& other) {
    *this = other;
}

// Copy Assignment Operator
template <class T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& other) {
    if (this != &other) {
        this->c = other.c;
    }
    return *this;
}

// Destructor
template <class T>
MutantStack<T>::~MutantStack() {
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}
template <class T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return this->c.end();
}

template <class T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
	return this->c.begin();
}

template <class T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
	return this->c.end();
}


#endif