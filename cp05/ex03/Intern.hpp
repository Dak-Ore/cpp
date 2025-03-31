#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
    // Default Constructor
    Intern();
    
    // Copy Constructor
    Intern(const Intern& other);
    
    // Copy Assignment Operator
    Intern& operator=(const Intern& other);
    
    // Destructor
    ~Intern();

	AForm *makeForm(std::string kind, std::string target);
};

#endif
