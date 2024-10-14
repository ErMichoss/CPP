#include "RPN.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

int main(int argc, char *argv[]){
	if (argc == 2){
		std::string input = argv[1];
		RPN rpn;

		for (int i = 0; input.c_str()[i] != '\0'; i++){
			if (std::isdigit(input.c_str()[i])){
				if (!(input.length() > i) && input.c_str()[i + 1] == ' '){
					std::cerr << "Error: argument not followed by space" << std::endl;
					return 1;
				}
				rpn.addToStack(std::atoi(input.substr(i, i).c_str()));
			}else if (input.c_str()[i] == '+'){
				//suma
			}else if (input.c_str()[i] == '-'){
				//resta
			}else if (input.c_str()[i] == '/'){
				//division
			}else if (input.c_str()[i] == '*'){
				//multiplicacion
			}
		}
	}else{
		std::cerr << "Invalid number of arguments" << std::endl;
	}
}