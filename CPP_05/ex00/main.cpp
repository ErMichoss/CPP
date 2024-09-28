#include "Bureaucrat.hpp"

int main(){
	std::cout << "<-- GOOD -->>" << std::endl << std::endl;
	try {
		Bureaucrat bureaucrat1("Poliedro Sanchez", 50);
		std::cout << bureaucrat1 << std::endl;
		bureaucrat1.increaseGrade();
		std::cout << bureaucrat1 << std::endl;
		bureaucrat1.decreaseGrade();
		std::cout << bureaucrat1 << std::endl;
	} catch (std::exception const& e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << "<-- BAD CONSTRUCTOR -->" << std::endl << std::endl;
	try {
		Bureaucrat bureaucrat2("Cuadrado Rajoy", -3);
		std::cout << bureaucrat2 << std::endl;
	} catch (std::exception const& e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << "<-- DECREASE ERROR -->" << std::endl << std::endl;
	try {
		Bureaucrat bureaucrat3("Barack Obamid", 150);
		std::cout << bureaucrat3 << std::endl;
		bureaucrat3.decreaseGrade();
		std::cout << bureaucrat3 << std::endl;
	} catch (std::exception const& e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << "<-- INCREASE ERROR -->" << std::endl << std::endl;
	try {
		Bureaucrat bureaucrat4("Santiago Pentabascal", 1);
		std::cout << bureaucrat4 << std::endl;
		bureaucrat4.increaseGrade();
		std::cout << bureaucrat4 << std::endl;
	} catch (std::exception const& e){
		std::cerr << e.what() << std::endl;
	}

}