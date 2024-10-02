#include "Form.hpp"

int main(){
	std::cout << "<-- GOOD -->" << std::endl;
	try{
		Bureaucrat bu("Burocrata", 2);
		Form Form("Tratado 1", 10, 2);
		bu.sign(Form);
		std::cout << Form << std::endl;
	} catch (std::exception const& e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << "<-- CAN NOT SIGN -->" << std::endl;
	try{
		Bureaucrat bu("Burocrata", 50);
		Form Form("Tratado 2", 10, 2);
		bu.sign(Form);
		std::cout << Form << std::endl;
	} catch (std::exception const& e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << "<-- IS ALREADY SIGNED -->" << std::endl;
	try{
		Bureaucrat bu("Burocrata", 50);
		Form Form("Tratado 3", 80, 2);
		bu.sign(Form);
		std::cout << Form << std::endl;
		bu.sign(Form);
	} catch (std::exception const& e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << "<-- BAD AForm LOW -->" << std::endl;
	try{
		Form Form("Tratado 4", 180, 2);
		std::cout << Form << std::endl;
	} catch (std::exception const& e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << "<-- BAD AForm HIGH -->" << std::endl;
	try{
		Form Form("Tratado 5", -120, 2);
		std::cout << Form << std::endl;
	} catch (std::exception const& e){
		std::cerr << e.what() << std::endl;
	}

	return 0;
}