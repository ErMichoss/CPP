#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char *argv[]){
	if (argc == 1){
		std::ifstream infile(argv[1]);
		if (!infile.is_open()){ std::cerr << "Can not open the input file" << std::endl; return 1; }

		std::ifstream data("./cpp_09/data.csv");
		if (!data.is_open()){ std::cerr << "Can not open the data.csv file" << std::endl; return 1; }

		std::string line;
		int i = 0;
		while ()
	} else {
		std::cout << "This program only accepts one argument" << std::endl;
	}
	return 0;
}