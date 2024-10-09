#include "Span.hpp"

Span::Span(){};

Span::Span(unsigned int N){
	this->N = N;
}

Span& Span::operator = (Span const& copy){
	this->N = copy.N;
	array.clear();
	for (int i = 0; i < (int)N; i++){
		array.push_back(copy.array[i]);
	}
	return *this;
}

Span::Span(Span const& copy){
	*this = copy;
}

Span::~Span(){};

void Span::addNumber(int num){
	if (array.size() < this->N)
		array.push_back(num);
	else
		throw std::out_of_range("Error: No more space in the array");
}

unsigned int Span::shortestSpan(){
	unsigned int dif;
	
	if (this->array.size() <= 1){throw std::logic_error("Not enough ints in the array");}
	
	if (this->array[0] > this->array[1])
		dif = this->array[0] - this->array[1];
	else
		dif = this->array[1] - this->array[0];
	
	for (unsigned long i = 1; i < this->array.size() - 1; i++){
		if (this->array[i] > this->array[i + 1]){
			if ((this->array[i] - this->array[i + 1]) < (int)dif)
				dif = (this->array[i] - this->array[i + 1]);
		}
		else{
			if ((this->array[i + 1] - this->array[i]) < (int)dif)
				dif = (this->array[i + 1] - this->array[i]);
		}
	}

	return (dif);
}

unsigned int Span::longestSpan(){
	unsigned int dif;
	
	if (this->array.size() <= 1){throw std::logic_error("Not enough ints in the array");}
	
	if (this->array[0] > this->array[1])
		dif = this->array[0] - this->array[1];
	else
		dif = this->array[1] - this->array[0];
	
	for (unsigned long i = 1; i < this->array.size() - 1; i++){
		if (this->array[i] > this->array[i + 1]){
			if ((this->array[i] - this->array[i + 1]) > (int)dif)
				dif = (this->array[i] - this->array[i + 1]);
		}
		else{
			if ((this->array[i + 1] - this->array[i]) > (int)dif)
				dif = (this->array[i + 1] - this->array[i]);
		}
	}
	
	return (dif);
}