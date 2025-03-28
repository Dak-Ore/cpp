#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
#include "Bureaucrat.hpp"


class Form
{

	public:
		Form();
		Form( Form const & src );
		Form(std::string name, unsigned int grade);
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
		std::string name;
		bool isSigned;
		const int grade_sign;
		const int grade_exec;
};

std::ostream &operator<<(std::ostream &os, const Form print);
#endif 