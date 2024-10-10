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

	BitcoinExchange& operator = (BitcoinExchange const& copy);
};

#endif