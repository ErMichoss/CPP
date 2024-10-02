#include "Intern.hpp"

Intern::Intern(){
	std::cout << "Intern create" << std::endl;
}

Intern&	Intern::operator = (Intern const& copy){
	(void)copy;
	return *this;
}

Intern::Intern(Intern const& copy){
	std::cout << "copy Intern" << std::endl;
	*this = copy;
}

Intern::~Intern(){
	std::cout << "Intern destroy" << std::endl;
}

AForm* Intern::createPresidentialPardon(std::string target){
	return new PresidentialPardonForm(target);
}

AForm* Intern::createRobotomyRequest(std::string target){
	return new RobotomyRequestForm(target);
}

AForm* Intern::createShrubberyCreation(std::string target){
	return new ShrubberyCreationForm(target);
}

AForm* Intern::makeForm(std::string name, std::string target){
	std::string forms[3] = {"presidential", "robotomy", "shrubbery"};
	AForm* (Intern::*constr[3])(std::string target) = {&Intern::createPresidentialPardon, &Intern::createRobotomyRequest, &Intern::createShrubberyCreation};
	for (int i = 0; i < 3; i++){
		if(forms[i] == name)
			return (this->*constr[i])(target);
	}
	return NULL;
}