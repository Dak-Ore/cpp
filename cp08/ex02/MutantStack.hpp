#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
public:
    // Default Constructor
    MutantStack();
    
    // Copy Constructor
    MutantStack(const MutantStack& other);
    
    // Copy Assignment Operator
    MutantStack& operator=(const MutantStack& other);
    
    // Destructor
    ~MutantStack();

	typedef typename std::stack<T>::container_type mstack;
	typedef typename mstack::iterator iterator;
	typedef typename mstack::const_iterator const_iterator;

	iterator begin();
	iterator end();
	const_iterator begin() const;
	const_iterator end() const;


};

# include "MutantStack.tpp"

#endif
