#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>


class Bureaucrat
{

	public:
		Bureaucrat();
		Bureaucrat( Bureaucrat const & src );
		Bureaucrat(std::string name, unsigned int grade);
		virtual ~Bureaucrat();
		Bureaucrat &		operator=( Bureaucrat const & rhs );
		std::string const &getName() const;
		unsigned int const &getGrade() const;
		
		void incrementGrade();
		void decrementGrade();

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
		unsigned int grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat print);
#endif 