#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>

class PmergeMe
{
public:
    // Default Constructor
    PmergeMe();
    
    // Copy Constructor
    PmergeMe(const PmergeMe& other);
    
    // Copy Assignment Operator
    PmergeMe& operator=(const PmergeMe& other);
    
    // Destructor
    ~PmergeMe();
};

#endif
