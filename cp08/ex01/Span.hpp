#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <algorithm>
# include <limits.h>

class Span
{
public:
    // Default Constructor
    Span();
	Span(unsigned int N);
    
    // Copy Constructor
    Span(const Span& other);
    
    // Copy Assignment Operator
    Span& operator=(const Span& other);
    
    // Destructor
    ~Span();
	void addNumber(int number);

	unsigned int shortestSpan() const;
	unsigned int longestSpan() const;

	class TooManyNumberException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class NotEnoughNumberException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	void	addNumberRange(std::vector<int>::iterator first, std::vector<int>::iterator last);
	void	print() const;
	// to test purpose only
	size_t	getSize() const;
private:
	unsigned int	_N;
	std::vector<int> 	_vector;
};

#endif
