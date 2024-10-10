#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>

bool esBisiesto(std::string year){
	int yearN = atoi(year.c_str());
	return (yearN % 4 == 0 && yearN % 100 != 0) || (yearN % 400 == 0);
}

int checkDate(std::string line){
	std::string year = line.substr(0, 4);
	std::string month = line.substr(5, 7);
	std::string day = line.substr(8, 10);
	std::string date = line.substr(0, 10);

	if (year <= "2001" || year >= "2022"){
		std::cerr << "Error: bad input => " << date << std::endl;
		return 1;
	} else if (month <= "01" || month >= "12"){
		std::cerr << "Error: bad input => " << date << std::endl;
		return 1;
	} else if (day <= "01" || day >= "31"){
		std::cerr << "Error: bad input => " << date << std::endl;
		return 1;
	} else {
		int num = atoi(month.c_str());
		switch (num) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day > "31"){
				std::cerr << "Error: bad input => " << date << std::endl;
				return 1;
			}
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (day > "30"){
				std::cerr << "Error: bad input => " << date << std::endl;
				return 1;
			}
            break;
        case 2:
            if (day > "28" || (day > "29" && esBisiesto(year))){
				std::cerr << "Error: bad input => " << date << std::endl;
				return 1;
			}
            break;
    	}
	}
	return 0;
}

void printValue(std::string line){
	if (checkDate(line) == 1){ return ; }
	else {std::cout << "OK" << std::endl; }
}

int main(int argc, char *argv[]){
	if (argc == 2){
		std::ifstream infile(argv[1]);
		if (!infile.is_open()){ std::cerr << "Can not open the input file" << std::endl; return 1; }

		std::ifstream data("./cpp_09/data.csv");
		if (!data.is_open()){ std::cerr << "Can not open the data.csv file" << std::endl; return 1; }

		std::string line;
		std::getline(infile, line);
		if (line != "date | value"){ std::cerr << "The header does not have the required format" << std::endl; return 1; }
		while (std::getline(infile, line)){
			printValue(line);
		}
	} else {
		std::cout << "This program only accepts one argument" << std::endl;
	}
	return 0;
}