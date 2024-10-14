#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include "BitcoinExchange.hpp"

bool esBisiesto(std::string year){
	int yearN = atoi(year.c_str());
	return (yearN % 4 == 0 && yearN % 100 != 0) || (yearN % 400 == 0);
}

int checkDate(std::string line){
	std::string year = line.substr(0, 4);
	std::string month = line.substr(5, 7);
	std::string day = line.substr(8, line.length() - 4);
	day = day.substr(0, 2);
	std::string date = line.substr(0, 10);

	if (year <= "2009"){
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
            if (day == "29"){
				if (!esBisiesto(year)){
				std::cerr << "Error: bad input => " << date << std::endl;
				return 1;
				}
			} else if (day > "28"){
				std::cerr << "Error: bad input => " << date << std::endl;
				return 1;
			}
            break;
		default:
			return 1;
    	}
	}
	return 0;
}

int	checkAmount(std::string line){
	int size = 0;
	for (int i = line.length(); i > 0 && line.c_str()[i] != '|'; i--){
		size++;
	}
	double btc = atof(line.substr(line.length() - size + 1, line.length()).c_str());
	if (btc < 0){
		std::cerr << "Error: not a positive number" << std::endl;
		return 1;
	} else if (btc > 1000){
		std::cerr << "Error: too large a number" << std::endl;
		return 1;
	}
	return 0;
}

void parseValue(std::string line, BitcoinExchange dataMap){
	if (checkDate(line) == 1){ return ; }
	else if (checkAmount(line) == 1) {return ;}
	else{
		std::string date = line.substr(0, 10);
		int size = 0;
		for (int i = line.length(); i > 0 && line.c_str()[i] != '|'; i--){
			size++;
		}
		double btc = atof(line.substr(line.length() - size + 1, line.length()).c_str());

		std::map<std::string, double> dataRef = dataMap.getMap();
		std::string lastDate = dataRef.begin()->first;
		double lastBtc = dataRef.begin()->second;
		for (std::map<std::string, double>::iterator i = dataRef.begin(); i != dataRef.end(); i++){
			if (i->first == date){
				std::cout << date << " => " << btc << " = " << btc * i->second << std::endl;
				return ;
			}else{
				lastDate = i->first;
				lastBtc = i->second;
			}
			if (i->first > date){
				std::cout << date << " => " << btc << " = " << btc * lastBtc << std::endl;
				return ;
			}
		}
	}
}

int main(int argc, char *argv[]){
	if (argc == 2){
		std::ifstream infile(argv[1]);
		if (!infile.is_open()){ std::cerr << "Can not open the input file" << std::endl; return 1; }

		std::ifstream data("./cpp_09/data.csv");
		if (!data.is_open()){ std::cerr << "Can not open the data.csv file" << std::endl; return 1; }
		std::string dataLine;
		std::getline(data, dataLine);
		BitcoinExchange dataMap;
		while (std::getline(data, dataLine)){
			std::string date = dataLine.substr(0, 10);
			double value = atof(dataLine.substr(12, dataLine.length()).c_str());
			dataMap.addToMap(date, value);
		}
		

		std::string line;
		std::getline(infile, line);
		if (line != "date | value"){ std::cerr << "The header does not have the required format" << std::endl; return 1; }

		while (std::getline(infile, line)){
			parseValue(line, dataMap);
		}
	} else {
		std::cout << "This program only accepts one argument" << std::endl;
	}
	return 0;
}