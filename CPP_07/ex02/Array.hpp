#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <string>
#include <iostream>
#include <exception>


template <typename T>
class Array{
	private:
		T *array;
		unsigned int sizeArray;
	public:
		Array(){
			this->array = new T();
			this->sizeArray = 0;
		}
		Array(unsigned int sizeArray){
			this->array = new T[sizeArray]();
			this->sizeArray = sizeArray;
		}
		Array(Array const& copy){
			this->array = new T[copy.sizeArray]();
			this->sizeArray = sizeArray;
			*this = copy;
		}
		~Array(){};

		unsigned int size() const{
			return (this->sizeArray);
		}

		T& operator [] (unsigned int index){
			if (index >= sizeArray || index < 0){throw std::out_of_range("Error: index out of range");}
			return this->array[index];
		}
		T const&  operator [] (unsigned int index) const{
			if (index >= sizeArray || index < 0){throw std::out_of_range("Error: index out of range");}
			return this->array[index];
		}
		Array& operator = (Array const& copy){
			if (copy.sizeArray <= this->sizeArray)
				for (int i = 0; i < copy.sizeArray; i++){this->array[i] = copy.array[i];}
			else
				for (int i = 0; i < this->sizeArray; i++){this->array[i] = copy.array[i];}
			return *this;
		}
};

#endif