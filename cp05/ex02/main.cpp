#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat one = Bureaucrat("one", 1);
	Bureaucrat two = Bureaucrat("two", 150);
	
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
	{
		AForm *oui = new PresidentialPardonForm();
		one.signForm(*oui);
		one.execute(*oui);
		two.execute(*oui);
		delete (oui);
	}
	{
		AForm *oui = new PresidentialPardonForm("pres");
		std::cout << oui->getIsSigned() << std::endl;
		one.execute(*oui);
		two.execute(*oui);
		delete (oui);
	}
	return 0;
}
