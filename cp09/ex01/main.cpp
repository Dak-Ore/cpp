# include "RPN.hpp"

int main(int argc, char* argv[])
{
	RPN rpn;
	if (argc != 2)
		std::cerr << "RPN: Invalid usage" << std::endl;
	else
	{
		try
		{
			std::cout << rpn.calculate(argv[1]) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return 0;
}
