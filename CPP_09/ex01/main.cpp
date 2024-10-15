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
				rpn.addToStack(std::atoi(input.substr(i, 1).c_str()));
			}else if (input.c_str()[i] == '+'){
				if (rpn.getStack().size() < 2){
					std::cerr << "Error: not enough numbers in the stack" << std::endl;
					return 1;
				}
				rpn.sum();
			}else if (input.c_str()[i] == '-'){
				if (rpn.getStack().size() < 2){
					std::cerr << "Error: not enough numbers in the stack" << std::endl;
					return 1;
				}
				rpn.res();
			}else if (input.c_str()[i] == '/'){
				if (rpn.getStack().size() < 2){
					std::cerr << "Error: not enough numbers in the stack" << std::endl;
					return 1;
				}
				if (rpn.div() == 1){
					return 1;
				}
			}else if (input.c_str()[i] == '*'){
				if (rpn.getStack().size() < 2){
					std::cerr << "Error: not enough numbers in the stack" << std::endl;
					return 1;
				}
				rpn.mult();
			}else if (input.c_str()[i] != ' '){
				std::cerr << "Error: invalid character" << std::endl;
				return 1;
			}
		}
		if (rpn.getStack().size() > 1){
			std::cerr << "Error" << std::endl;
			return 1;
		}
		std::cout << rpn.getStack().top() << std::endl;
	}else{
		std::cerr << "Invalid number of arguments" << std::endl;
		return 1;
	}
	return 0;
}