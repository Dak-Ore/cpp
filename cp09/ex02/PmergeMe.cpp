#include "PmergeMe.hpp"

// Default Constructor
PmergeMe::PmergeMe() {
    std::cout << "PmergeMe default constructor called" << std::endl;
}

// Copy Constructor
PmergeMe::PmergeMe(const PmergeMe& other) {
    std::cout << "PmergeMe copy constructor called" << std::endl;
    *this = other;
}

// Copy Assignment Operator
PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
    std::cout << "PmergeMe copy assignment operator called" << std::endl;
    if (this != &other) {
        // Copy attributes here
    }
    return *this;
}

// Destructor
PmergeMe::~PmergeMe() {
    std::cout << "PmergeMe destructor called" << std::endl;
}
