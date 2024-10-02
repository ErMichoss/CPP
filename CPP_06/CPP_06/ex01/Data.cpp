#include "Data.hpp"

Data::Data(){
	std::cout << "Contructor data" << std::endl;
}

Data::Data(int i, int j){
	std::cout << "Contructor data" << std::endl;
	this->i = i;
	this->j = j;
}

Data& Data::operator = (Data const& copy){
	this->i = copy.i;
	this->j = copy.j;
	return *this;
}

Data::Data(Data const& copy){
	std::cout << "Cosntructor data" << std::endl;
	*this = copy;
}

Data::~Data(){
	std::cout << "Destructor data" << std::endl;
}