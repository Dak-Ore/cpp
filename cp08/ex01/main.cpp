#include "Span.hpp"

void	subjectTest()
{
	std::cout << "<< SUBJECT TEST >>"  << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	sp.print();

}

void	overflowTest()
{
	std::cout << "<< OVERFLOW TEST >>"  << std::endl;
	Span sp = Span(5);
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.print();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	negativeTest()
{
	std::cout << "<< NEGATIVE VALUE TEST >>"  << std::endl;
	Span sp = Span(5);
	sp.addNumber(-6);
	sp.addNumber(-3);
	sp.addNumber(-17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "longest span : " << sp.longestSpan() << std::endl;
	sp.print();
}

void	rangeTest()
{
	std::cout << "<< RANGE TEST >>"  << std::endl;
	std::vector<int> sp;
	for (int i = 0; i < 20; i++)
		sp.push_back(i);
	Span big = Span(20);
	big.addNumberRange(sp.begin(), sp.end());
	big.print();
}

void	createNSpan(unsigned int N, unsigned int mod)
{
	Span span = Span(N);
	try
	{
		srand(time(NULL));
		for (unsigned int i = 0; i < N; i++)
		{
			if (mod != 0)
				span.addNumber(rand() % mod);
			else
				span.addNumber(rand());
		}
		std::cout << "Span size is : " << span.getSize() << std::endl;
		if (span.getSize() <= 100)
			span.print();
		std::cout << "shortest span: " << span.shortestSpan() << std::endl;
		std::cout << "longest span : " << span.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

int main(int c, char const **argv)
{
	if (c == 1)
	{
		subjectTest();
		overflowTest();
		negativeTest();
		rangeTest();
		createNSpan(10000, 100);
	}
	else
	{
		if ((c>= 2 && atoi(argv[1]) <= 0) || (c >= 3 && atoi(argv[2]) <= 0))
			std::cout << "invalid data" << std::endl;
		else
		{
			if (c < 3)
				createNSpan(atoi(argv[1]), 100);
			else
				createNSpan(atoi(argv[1]), atoi(argv[2]));
		}

	}
	return 0;
}
