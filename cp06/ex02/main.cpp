#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>

Base *generate(void)
{
	srand(time(0));
	int random = rand() % 3;
	switch (random)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		default:
			return new C();
	}
}


void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown type" << std::endl;
}

void identify(Base &p) {
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    } catch (std::exception&) {}
    
    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    } catch (std::exception&) {}
    
    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    } catch (std::exception&) {}
    
    std::cout << "Unknown type" << std::endl;
}

int main(void)
{
	Base *rand = generate();
	std::cout << "<< Checking generate >>" << std::endl;
	identify(rand);

	std::cout << "<< Checking Identify *>>" << std::endl;
	Base *a = new A();
	Base *b = new B();
	Base *c = new C();
	identify(a);
	identify(b);
	identify(c);

	std::cout << "<< Checking Identify &>>" << std::endl;
	identify(*a);
	identify(*b);
	identify(*c);

	delete (rand);
	delete (a);
	delete (b);
	delete (c);
	return 0;
}
