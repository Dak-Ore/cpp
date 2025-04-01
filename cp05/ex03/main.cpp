#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Bureaucrat one = Bureaucrat("one", 1);
	Bureaucrat two = Bureaucrat("two", 150);
	
	// TEST OF PREVIOUS PART
	// {
	// 	AForm *oui = new RobotomyRequestForm();
	// 	one.signForm(*oui);
	// 	oui->execute(one);
	// 	delete (oui);
	// }
	// {
	// 	AForm *oui = new ShrubberyCreationForm();
	// 	one.signForm(*oui);
	// 	oui->execute(one);
	// 	delete (oui);
	// }
	// {
	// 	AForm *oui = new PresidentialPardonForm();
	// 	one.signForm(*oui);
	// 	oui->execute(one);
	// 	delete (oui);
	// }
	// {
	// 	AForm *oui = new PresidentialPardonForm();
	// 	one.signForm(*oui);
	// 	one.execute(*oui);
	// 	two.execute(*oui);
	// 	delete (oui);
	// }
	// {
	// 	AForm *oui = new PresidentialPardonForm("pres");
	// 	std::cout << oui->getIsSigned() << std::endl;
	// 	one.execute(*oui);
	// 	two.execute(*oui);
	// 	delete (oui);
	// }
	{
		std::cout << "<< robotomy request creation >>" << std::endl;
		Intern random;
		AForm *oui = random.makeForm("robotomy request", "Bender");
		std::cout << *oui << std::endl;
		one.signForm(*oui);
		one.execute(*oui);
		delete (oui);
	}
	{
		std::cout << std::endl << "<< unknow type creation >>" << std::endl;
		Intern random;
		AForm *oui = random.makeForm("robotomy", "Bender");
		std::cout << oui << std::endl;
	}
	{
		std::cout << std::endl << "<< presidential pardon creation >>" << std::endl;
		Intern random;
		AForm *oui = random.makeForm("presidential pardon", "Bender");
		std::cout << *oui << std::endl;
		one.signForm(*oui);
		one.execute(*oui);
		delete (oui);
	}
	{
		std::cout << std::endl << "<< shrubbery creation creation (his name is shrubbery creation so there is 2 creation) >>" << std::endl;
		Intern random;
		AForm *oui = random.makeForm("shrubbery creation", "Bender");
		std::cout << *oui << std::endl;
		one.signForm(*oui);
		one.execute(*oui);
		delete (oui);
	}
	{
		std::cout << std::endl << "<< testing if the intern created form work like ex02 >>" << std::endl;
		Intern random;
		AForm *oui = random.makeForm("shrubbery creation", "Bender");
		std::cout << *oui << std::endl;
		one.execute(*oui);
		two.execute(*oui);
		one.signForm(*oui);
		one.execute(*oui);
		two.execute(*oui);
		delete (oui);
	}
	return 0;
}
