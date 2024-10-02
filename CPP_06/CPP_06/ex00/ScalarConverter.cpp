#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
	std::cout << "ScalarConverter default constructor" << std::endl;
}

ScalarConverter& ScalarConverter::operator = (ScalarConverter const& copy){
	(void)copy;
	return *this;
}

ScalarConverter::ScalarConverter(ScalarConverter const& copy){
	std::cout << "ScalarConverter copy constructor" << std::endl;
	*this = copy;
}

ScalarConverter::~ScalarConverter(){
	std::cout << "ScalarConverter destructor called" << std::endl;
}

void ScalarConverter::convert(std::string str){
	if (str == "inff" || str == "-inff" || str == "nanf")
		str = str.substr(0, (str.length() -1));
	if (str.length() > 1 && str != "inf" && str != "-inf" && str != "nan" && isalpha(str.c_str()[0])){
		std::cout << "Error: parameter not valid" << std::endl;
		return ;
	}
	else if (isalpha(str.c_str()[0]) && str != "inf" && str != "-inf" && str != "nan"){
		char c = str.c_str()[0];
		std::cout << "char: " << c << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
	}
	else{
		double n = atof(str.c_str());
		if (str == "inf" || str == "-inf" || str == "nan"){
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
		}
		else{
			if (n < 0 || n > 127)
				std::cout << "char: non displayable"<< std::endl;
			else
				std::cout << "char: " << static_cast<char>(n) << std::endl;
			std::cout << "int: " << static_cast<int>(n) << std::endl;
		}
		if (str.find('.') != std::string::npos){
			std::cout << "float: " << static_cast<float>(n) << "f" << std::endl;
			std::cout << "double: " << n << std::endl;
		}
		else if (str == "inf" || str == "-inf" || str == "nan"){
			std::cout << "float: " << static_cast<float>(n) << "f" << std::endl;
			std::cout << "double: " << n << std::endl;
		}
		else{
			std::cout << "float: " << static_cast<float>(n) << ".0f" << std::endl;
			std::cout << "double: " << n << ".0" <<std::endl;
		}
	}
	
}