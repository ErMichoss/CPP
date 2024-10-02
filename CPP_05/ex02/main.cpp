#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
	try{
		Bureaucrat b("Bob", 4);
		ShrubberyCreationForm f("Bob");
		b.sign(f);
		b.execute(f);
		std::cout << f << std::endl;
	} catch (std::exception const& e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::srand(static_cast<unsigned int>(std::time(0)));
	try{
		Bureaucrat b("Bob", 4);
		RobotomyRequestForm f("Bob");
		b.sign(f);
		b.execute(f);
		std::cout << f << std::endl;
	} catch (std::exception const& e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try{
		Bureaucrat b("Bob", 4);
		PresidentialPardonForm f("Bob");
		b.sign(f);
		b.execute(f);
		std::cout << f << std::endl;
	} catch (std::exception const& e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}