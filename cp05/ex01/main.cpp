#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Form("Bug", 0, 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form("Bug", 151, 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Bureaucrat one = Bureaucrat("one", 1);
	Bureaucrat two = Bureaucrat("two", 150);
	Form easy = Form("easy", 75, 75);
	Form hard = Form("hard", 1, 1);
	one.signForm(easy);
	two.signForm(easy);
	one.signForm(hard);
	two.signForm(hard);
	return 0;
}
