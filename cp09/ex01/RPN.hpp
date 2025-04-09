#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <algorithm>
# include <exception>

class RPN
{
public:
    // Default Constructor
    RPN();
    
    // Copy Constructor
    RPN(const RPN& other);
    
    // Copy Assignment Operator
    RPN& operator=(const RPN& other);
    
    // Destructor
    ~RPN();

	class ErrorInvalidCharacter : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	int	calculate(std::string calcul);

private:
	std::stack<int>	_calcul;
};

#endif
