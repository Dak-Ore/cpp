#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat one = Bureaucrat("one", 1);
	Bureaucrat two = Bureaucrat("two", 150);
	
	std::cout << "<< executing from the form >>" << std::endl;
	{
		AForm *oui = new RobotomyRequestForm();
		one.signForm(*oui);
		oui->execute(one);
		delete (oui);
	}
	{
		AForm *oui = new ShrubberyCreationForm();
		one.signForm(*oui);
		oui->execute(one);
		delete (oui);
	}
	{
		AForm *oui = new PresidentialPardonForm();
		one.signForm(*oui);
		oui->execute(one);
		delete (oui);
	}
	std::cout << std::endl << "<< executing from the bureaucrat (it use try catch) >>" << std::endl;
	{
		AForm *oui = new PresidentialPardonForm();
		one.signForm(*oui);
		one.execute(*oui);
		two.execute(*oui);
		delete (oui);
	}
	{
		AForm *oui = new PresidentialPardonForm("pres");
		std::cout << *oui << std::endl;
		one.execute(*oui);
		two.execute(*oui);
		delete (oui);
	}
	{
		AForm *oui = new ShrubberyCreationForm("no");
		std::cout << *oui << std::endl;
		two.execute(*oui);
		delete (oui);
	}
	return 0;
}
