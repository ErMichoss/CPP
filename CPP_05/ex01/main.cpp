#include "Form.hpp"

int main(){
	std::cout << "<-- GOOD -->" << std::endl;
	try{
		Bureaucrat bu("Burocrata", 2);
		Form form("Tratado 1", 10, 2);
		bu.sign(form);
		std::cout << form << std::endl;
	} catch (std::exception const& e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << "<-- CAN NOT SIGN -->" << std::endl;
	try{
		Bureaucrat bu("Burocrata", 50);
		Form form("Tratado 2", 10, 2);
		bu.sign(form);
		std::cout << form << std::endl;
	} catch (std::exception const& e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << "<-- IS ALREADY SIGNED -->" << std::endl;
	try{
		Bureaucrat bu("Burocrata", 50);
		Form form("Tratado 3", 80, 2);
		bu.sign(form);
		std::cout << form << std::endl;
		bu.sign(form);
	} catch (std::exception const& e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << "<-- BAD FORM LOW -->" << std::endl;
	try{
		Form form("Tratado 4", 180, 2);
		std::cout << form << std::endl;
	} catch (std::exception const& e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << "<-- BAD FORM HIGH -->" << std::endl;
	try{
		Form form("Tratado 5", -120, 2);
		std::cout << form << std::endl;
	} catch (std::exception const& e){
		std::cerr << e.what() << std::endl;
	}

	return 0;
}