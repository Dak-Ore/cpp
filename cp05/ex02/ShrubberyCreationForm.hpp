#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : virtual public AForm
{
	public:
		// Default Constructor
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string name);
		
		// Copy Constructor
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		
		// Copy Assignment Operator
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
		
		// Destructor
		~ShrubberyCreationForm();

		void execute(Bureaucrat const & executor) const;
	private:
		std::string target;
};

#endif
