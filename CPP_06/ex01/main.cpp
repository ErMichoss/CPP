#include "Serialization.hpp"

int main(){
	Data* d = new Data(2, 3);

	uintptr_t p = Serialization::serialize(d);
	Data* d2 = Serialization::deserialize(p);

	delete d2;

	return 0;
}