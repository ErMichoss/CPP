#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <string>
# include <iostream>
# include <stdint.h>
# include "Data.hpp"

class Serialization{
	private:
		Serialization();
		Serialization(Serialization const& copy);
		~Serialization();
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
		Serialization& operator = (Serialization const& copy);
};

#endif