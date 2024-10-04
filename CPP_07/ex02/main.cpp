#include "Array.hpp"

int main(){
	Array<int> num(5);

	num[0] = 3;
	std::cout << num[0] << std::endl;

	try{
		num[20] = 2;
	} catch (std::out_of_range& e){
		std::cout << e.what() << std::endl;
	}

	Array<char> c;
	std::cout << c.size() << std::endl;

	Array<std::string> ArrStr(1);
	std::cout << ArrStr[0] << std::endl;
	ArrStr[0] = "Hola";
	std::cout << ArrStr[0] << std::endl;
	std::cout << ArrStr[0].length() << std::endl;

	return 0;
}