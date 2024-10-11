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
    	}
	}
	return 0;
}

int	checkAmount(std::string line){
	int size = 0;
	for (int i = line.length(); i > 0 && line.c_str()[i] != '|'; i--){
		size++;
	}
	if (line.substr(line.length() - size + 2, line.length()) > "2147483647" && line.substr(line.length() - size + 2, line.length()).length() >= 10){
		std::cerr << "Error: too large a number" << std::endl;
		return 1;
	}
	double btc = atof(line.substr(line.length() - size + 1, line.length()).c_str());
	if (btc < 0){
		std::cerr << "Error: not a positive number" << std::endl;
		return 1;
	}
	return 0;
}

void parseValue(std::string line, BitcoinExchange& btcMap){
	if (checkDate(line) == 1){ return ; }
	else if (checkAmount(line) == 1) {return ;}
	else{
		std::string date;
		date = line.substr(0, 10);
			int size = 0;
			for (int i = line.length(); i > 0 && line.c_str()[i] != '|'; i--){
				size++;
			}
			int btc = atoi(line.substr(line.length() - size + 1, line.length()).c_str());
		btcMap.addToMap(date, btc);
	}
}

void compareData(std::ifstream& data, BitcoinExchange btcMap){
	std::string line;
	BitcoinExchange dataMap;
	while (std::getline(data, line)){
		int i;
		for (i = 0; line.c_str()[i] != ','; i++){}
		std::string date = line.substr(0, i);
		float value = atof(line.substr(i + 1, line.length()).c_str());
		dataMap.addToMap(date, value);
	}

	const std::map<std::string, double>& btcMapRef = btcMap.getMap();
	// const std::map<std::string, double>& dataMapRef = dataMap.getMap();

	for (std::map<std::string, double>::const_iterator btcIt = btcMapRef.begin(); btcIt != btcMapRef.end(); btcIt++) {
		std::cout << btcIt->first << " => " << btcIt->second << std::endl;
	}

    // for (std::map<std::string, double>::const_iterator btcIt = btcMapRef.begin(); btcIt != btcMapRef.end(); ++btcIt) {
    //     const std::string& btcDate = btcIt->first;
    //     double btcValue = btcIt->second;
    //     std::map<std::string, double>::const_iterator closest = dataMapRef.end();
    //     for (std::map<std::string, double>::const_iterator dataIt = dataMapRef.begin(); dataIt != dataMapRef.end(); ++dataIt) {
    //         if (dataIt->first < btcDate) {
    //             closest = dataIt;
    //         } else {
    //             break;
    //         }
    //     }

    //     if (closest != dataMapRef.end()) {
    //         std::cout << btcDate << " => " << btcValue << " = " << btcValue * closest->second << std::endl;
    //     }
    // }
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

		BitcoinExchange btcMap;
		while (std::getline(infile, line)){
			parseValue(line, btcMap);
		}
		compareData(data, btcMap);
	} else {
		std::cout << "This program only accepts one argument" << std::endl;
	}
	return 0;
}