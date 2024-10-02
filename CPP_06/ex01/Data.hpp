#ifndef DATA_HPP
# define DATA_HPP

# include <string>
# include <iostream>

class Data{
	public:
		int i;
		int j;

		Data();
		Data(int i, int j);
		Data(Data const& copy);
		~Data();

		Data& operator = (Data const& copy);
};

#endif