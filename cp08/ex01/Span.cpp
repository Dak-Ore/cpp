#include "Span.hpp"

// Default Constructor
Span::Span() : _N(0)
{
}

Span::Span(unsigned int N) : _N(N)
{

}

// Copy Constructor
Span::Span(const Span& other) {
    *this = other;
}

// Copy Assignment Operator
Span& Span::operator=(const Span& other) {
    std::cout << "Span copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_N = other._N;
		// call vector copy assignement operator
		this->_vector = other._vector;
    }
    return *this;
}

// Destructor
Span::~Span() {
}

const char *Span::TooManyNumberException::what() const throw()
{
	return ("too many number");
}

const char *Span::NotEnoughNumberException::what() const throw()
{
	return ("not enough number");
}

void Span::addNumber(int number)
{
	if (this->_N > this->_vector.size())
		this->_vector.push_back(number);
	else
		throw TooManyNumberException();
}



unsigned int Span::shortestSpan() const
{
	if (this->_vector.size() < 2)
		throw NotEnoughNumberException();
	std::vector<int> sorted = this->_vector;
	std::sort(sorted.begin(), sorted.end());
	int min = INT_MAX;
	for (size_t i = 0; i < this->_vector.size() - 1; i++)
	{
		if (sorted[i + 1] - sorted[i] < min)
			min = sorted[i + 1] - sorted[i];
	}
	return min;
}
unsigned int Span::longestSpan() const
{
	if (this->_vector.size() < 2)
		throw NotEnoughNumberException();
	std::vector<int>::const_iterator max = std::max_element(this->_vector.begin(), this->_vector.end());
	std::vector<int>::const_iterator min = std::min_element(this->_vector.begin(), this->_vector.end());
	return (*max - *min);
}


void	Span::addNumberRange(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	if (this->_vector.size() + std::distance(first, last) > this->_N)
		throw (TooManyNumberException());
	this->_vector.insert(this->_vector.end(), first, last);

}

void	Span::print() const
{
	std::cout << "span : " << std::endl << "       ";
	for (size_t i = 0; i < this->_vector.size(); i++)
	{
		if (i % 10 == 0 && i != 0)
			std::cout << std::endl << "       ";
		std::cout << this->_vector[i] << " ";
	}

	std::cout << std::endl;
}

size_t	Span::getSize() const
{
	return (this->_vector.size());
}