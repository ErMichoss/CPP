#include "iter.hpp"
#include <string>
#include <iostream>

void addOne(int& i){
	i++;
}

void toUpper(char& c){
	if (isalpha(c) && c >= 'a' && c <= 'z')
		c = c - 32;
}

int main(){
	int array[] = {1, 2, 3, 4, 5};
	for (int i = 0; i < 5; i++){
		std::cout << array[i] << std::endl;
	}
	iter(array, 5, addOne);
	for (int i = 0; i < 5; i++){
		std::cout << array[i] << std::endl;
	}

	char str[] = "Hola mundo!";
	for (int i = 0; i < 12; i++){
		std::cout << str[i];
	}
	std::cout << std::endl;
	iter(str, 12, toUpper);
	for (int i = 0; i < 12; i++){
		std::cout << str[i];
	}
	std::cout << std::endl;
}