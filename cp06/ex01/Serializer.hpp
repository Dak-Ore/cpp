#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>
# include "Data.hpp"

class Serializer
{
private:
    // Default Constructor
    Serializer();
    
    // Copy Constructor
    Serializer(const Serializer& other);
    
    // Copy Assignment Operator
    Serializer& operator=(const Serializer& other);
    
    // Destructor
    ~Serializer();
public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};

#endif
