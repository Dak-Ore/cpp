#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat; 
class Form
{

	public:
		Form();
		Form( Form const & src );
		Form(std::string formname, unsigned int grade_s, unsigned int grade_e);
		virtual ~Form();
		Form &operator=( Form const & rhs );
		std::string const &getName() const;
		unsigned int const &getGradeSign() const;
		unsigned int const &getGradeExec() const;
		bool const &getIsSigned() const;
		void beSigned(const Bureaucrat person);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
	private:
		const std::string name;
		bool isSigned;
		const unsigned int grade_sign;
		const unsigned int grade_exec;
};

std::ostream &operator<<(std::ostream &os, const Form print);
#endif 