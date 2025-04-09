# include "BitcoinExchange.hpp"

int main(int c, char const **v)
{
	if (c < 2)
		std::cerr << "Error: could not open file." << std::endl;
	else
	{
		BitcoinExchange btc;
		btc.readInput("data.csv", 1);
		btc.readInput(v[1], 0);
	}

	return 0;
}
