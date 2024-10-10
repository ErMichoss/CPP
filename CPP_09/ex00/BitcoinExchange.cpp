#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange& BitcoinExchange::operator = (BitcoinExchange const& copy){
	for (std::map<std::string, double>::const_iterator i = copy.dataMap.begin(); i != copy.dataMap.end(); i++){
		this->dataMap[i->first] = i->second;
	}
	return *this;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const& copy){
	*this = copy;
}

BitcoinExchange::~BitcoinExchange(){}