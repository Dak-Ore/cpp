#include "RPN.hpp"

// Default Constructor
RPN::RPN() {
}

int RPN::calculate(std::string calcul)
{
	int left;
	int	right;
	for (int i = 0; calcul[i]; i++)
	{
		if (i % 2 == 1 && calcul[i] != ' ')
			throw ErrorInvalidCharacter();
		else if (i % 2 == 0)
		{
			if (isdigit(calcul[i]))
				this->_calcul.push(calcul[i] - 48);
			else
			{
				if (this->_calcul.size() < 2)
					throw ErrorInvalidCharacter();
				left = this->_calcul.top();
				this->_calcul.pop();
				right = this->_calcul.top();
				this->_calcul.pop();
				switch (calcul[i])
				{
					case '*':
						this->_calcul.push(right * left);
						break;
					case '+':
						this->_calcul.push(right + left);
						break;
					case '-':
						this->_calcul.push(right - left);
						break;
					case '/':
						this->_calcul.push(right / left);
						break;
					default:
						throw ErrorInvalidCharacter();
						break;
				}
			}
		}
	}
	return (this->_calcul.top());
}

// Copy Constructor
RPN::RPN(const RPN& other) {
    *this = other;
}

const char *RPN::ErrorInvalidCharacter::what() const throw()
{
	return ("Error: Invalid character");
}

// Copy Assignment Operator
RPN& RPN::operator=(const RPN& other) {
    std::cout << "RPN copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_calcul = other._calcul;
    }
    return *this;
}

// Destructor
RPN::~RPN() {
}
