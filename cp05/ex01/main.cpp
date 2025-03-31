#include "Bureaucrat.hpp"

int main(void)
{
	// IS OK
	try
	{
		Bureaucrat high = Bureaucrat("high", 1);
		std::cout << high << std::endl;
		Bureaucrat low = Bureaucrat("low", 150);
		std::cout << low << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// 1 is the highest possible grade 150 the lowest
	// send exception grade too low
	try
	{
		Bureaucrat low = Bureaucrat("low", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// send exception grade too high
	try
	{
		Bureaucrat high = Bureaucrat("high", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// send exception grade too low
	try
	{
		Bureaucrat low = Bureaucrat("low", 150);
		std::cout << low << std::endl;
		low.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// send exception grade too high
	try
	{
		Bureaucrat high = Bureaucrat("high", 1);
		std::cout << high << std::endl;
		high.incrementGrade();
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
	return 0;
}
