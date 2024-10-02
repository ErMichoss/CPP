#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>
# include <iostream>
# include <cstdlib>

class ScalarConverter{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const& copy);
		~ScalarConverter();
	public:
		static void convert(std::string str);

		ScalarConverter& operator = (ScalarConverter const& copy);
};

#endif