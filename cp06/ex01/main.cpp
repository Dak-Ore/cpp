#include "Serializer.hpp"

int main(void)
{
	Data *data = new Data;
	data->name = "42";
	data->value = 42;

	std::cout << "BEFORE" << std::endl;
	std::cout << data->name << std::endl;
	std::cout << data->value << std::endl;

	uintptr_t ptr = Serializer::serialize(data);
	Data *other = Serializer::deserialize(ptr);

	std::cout << "AFTER" << std::endl;
	std::cout << other->name << std::endl;
	std::cout << other->value << std::endl;

	return 0;
}
