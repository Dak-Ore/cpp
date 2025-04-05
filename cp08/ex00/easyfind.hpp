#include <iostream>
#include <algorithm>
#include <exception>

class NotInContainerException : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("value not in container");
		}
};

template <typename T>
typename T::iterator easyfind(T &container, int toSearch)
{
	typename T::iterator i;
	i = std::find(container.begin(), container.end(), toSearch);
	if (i == container.end() && *i != toSearch)
		throw NotInContainerException();
	return (i);
}