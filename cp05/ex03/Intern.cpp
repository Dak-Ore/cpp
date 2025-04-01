#include "Intern.hpp"

// Default Constructor
Intern::Intern()
{
}

// Copy Constructor
Intern::Intern(const Intern& other) {
	*this = other;
}

// Copy Assignment Operator
Intern& Intern::operator=(const Intern& other) {
    (void) other;
    return *this;
}

// Destructor
Intern::~Intern() {
}

AForm *Intern::makeForm(std::string kind, std::string target)
{
	std::string	forms[] = {"robotomy request", "shrubbery creation", "presidential pardon"};

	int i = 0;
	while (i < 3 && kind.compare(forms[i]))
		i++;

	switch (i)
	{
		case 0:
			std::cout << "Intern creates " << kind << std::endl;
			return (new RobotomyRequestForm(target));
		case 1:
			std::cout << "Intern creates " << kind << std::endl;
			return (new ShrubberyCreationForm(target));
		case 2:
			std::cout << "Intern creates " << kind << std::endl;
			return (new PresidentialPardonForm(target));
		default:
			std::cerr << "Error: Intern can't create unknow form type " << kind << std::endl;
			return NULL;
	}


}
