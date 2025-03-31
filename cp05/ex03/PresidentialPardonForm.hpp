#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm: virtual public AForm
{
public:
    // Constructor
    PresidentialPardonForm();
	PresidentialPardonForm(std::string name);
    
    // Copy Constructor
    PresidentialPardonForm(const PresidentialPardonForm& other);
    
    // Copy Assignment Operator
    PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
    
    // Destructor
    ~PresidentialPardonForm();

	void execute(Bureaucrat const & executor) const;
private:
	std::string target;
};

#endif
