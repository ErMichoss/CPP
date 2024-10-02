#include "ScalarConverter.hpp"

int main(){
	ScalarConverter::convert("42");
	std::cout << std::endl;
	ScalarConverter::convert("a");
	std::cout << std::endl;
	ScalarConverter::convert("2.5f");
	std::cout << std::endl;
	ScalarConverter::convert("2.3456787678");
	std::cout << std::endl;
	ScalarConverter::convert("nanf");
	std::cout << std::endl;
	ScalarConverter::convert("inf");
	std::cout << std::endl;
	ScalarConverter::convert("-inff");
	return 0;
}