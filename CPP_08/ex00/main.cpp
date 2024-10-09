#include "easyfind.hpp"

int main(){
	std::vector<int> cont1;
	cont1.push_back(1);
	cont1.push_back(2);
	cont1.push_back(3);
	cont1.push_back(4);
	cont1.push_back(5);
	cont1.push_back(6);

	try{
		std::vector<int>::const_iterator i = easyfind<std::vector<int>, std::vector<int>::const_iterator>(cont1, 3);
		std::cout << *i << std::endl;
	}	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}

	try{
		std::vector<int>::iterator i = easyfind<std::vector<int>, std::vector<int>::iterator>(cont1, 9);
		std::cout << *i << std::endl;
	}	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}

	std::list<int> cont2;
	cont2.push_back(1);
	cont2.push_back(2);
	cont2.push_back(3);
	cont2.push_back(4);
	cont2.push_back(5);

	try{
		std::list<int>::iterator i = easyfind<std::list<int>, std::list<int>::iterator>(cont2, 4);
		std::cout << *i << std::endl;
	} catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
}