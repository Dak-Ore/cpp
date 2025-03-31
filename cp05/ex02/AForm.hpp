#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat; 
class AForm
{

	public:
		AForm();
		AForm( AForm const & src );
		AForm(std::string AFormname, unsigned int grade_s, unsigned int grade_e);
		virtual ~AForm();
		AForm &operator=( AForm const & rhs );
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

		class FormNotSigned : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		virtual void execute(Bureaucrat const & executor) const = 0;
	private:
		const std::string name;
		bool isSigned;
		const unsigned int grade_sign;
		const unsigned int grade_exec;
};

#endif 