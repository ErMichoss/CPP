#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm(){
	std::cout << "Robotomy default constructor has been called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator = (RobotomyRequestForm const& copy){
	this->target = copy.target;
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& copy): AForm(copy.getName(), 72, 45, copy.getSigned()){
	std::cout << "Robotomy copy constructor has been called" << std::endl;
	*this = copy;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotomy", 72, 45, false){
	std::cout << "Robotomy constructor has been called" << std::endl;
	this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "Robotomy destructor has beem called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const& executor){
	if (executor.getGrade() > this->getGradeToExecute()){throw GradeTooLowException();}
	int a = rand() % 2;
	if (a == 0){std::cout << this->target << " has been robotomize succesfully" << std::endl;}
	else {std::cout << this->target << " could not be robotomized" << std::endl;}
}