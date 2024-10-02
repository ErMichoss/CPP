#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm(){
	std::cout << "Presidential default constructor has been called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator = (PresidentialPardonForm const& copy){
	this->target = copy.target;
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& copy): AForm(copy.getName(), 25, 5, copy.getSigned()){
	std::cout << "Presidentia copy constructor has been called" << std::endl;
	*this = copy;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Presidential", 25, 5, false){
	std::cout << "Presidential contructor has been called" << std::endl;
	this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "Presidential destructor has been called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const& executor){
	if (executor.getGrade() > this->getGradeToExecute()){throw GradeTooLowException();}
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}