#include "RPN.hpp"

// Default Constructor
RPN::RPN() {
    std::cout << "RPN default constructor called" << std::endl;
}

// Copy Constructor
RPN::RPN(const RPN& other) {
    std::cout << "RPN copy constructor called" << std::endl;
    *this = other;
}

// Copy Assignment Operator
RPN& RPN::operator=(const RPN& other) {
    std::cout << "RPN copy assignment operator called" << std::endl;
    if (this != &other) {
        // Copy attributes here
    }
    return *this;
}

// Destructor
RPN::~RPN() {
    std::cout << "RPN destructor called" << std::endl;
}
