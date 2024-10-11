#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <string>

class BitcoinExchange{
	private:
		std::map<std::string, double> dataMap;
	public:
	BitcoinExchange();
	BitcoinExchange(BitcoinExchange const& copy);
	~BitcoinExchange();
	
	void addToMap(std::string key, double value);
	std::map<std::string, double> getMap(); 

	BitcoinExchange& operator = (BitcoinExchange const& copy);
};

#endif