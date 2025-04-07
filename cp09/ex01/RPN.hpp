#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>

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
};

#endif
