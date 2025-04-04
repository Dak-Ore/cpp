#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <class T>
class Array
{
private:
	T *elements;
	unsigned int	esize;
public:
    // Default Constructor
    Array();
    Array(unsigned int size);
    // Copy Constructor
    Array(const Array& other);
	T operator[](size_t index) const;
    T& operator[](size_t index);
    // Copy Assignment Operator
    Array& operator=(const Array& other);
    


	unsigned int size () const;
    // Destructor
    ~Array();

	class IndexOutOfBounds : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

};

# include "Array.tpp"

#endif
