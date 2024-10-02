#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm(){
	std::cout << "Shrubbery default constructor has been called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (ShrubberyCreationForm const& copy){
	this->target = copy.target;
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& copy): AForm(copy.getName(), 145, 137, copy.getSigned()){
	std::cout << "Shrubbery copy constructor has been called" << std::endl;
	*this = copy;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Shrubbery", 145, 137, false){
	std::cout << "Shrubbery constructor has been called" << std::endl;
	this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "Shrubbery destructor has been called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor){
	if (executor.getGrade() > this->getGradeToExecute()){throw GradeTooLowException();}
	if (this->getSigned() == false){std::cout << "Can not execute a form that is not signed" << std::endl; return ;}
	std::string file = target + "_shrubbery";
	std::ofstream new_file(file.c_str());
	if (!new_file) {std::cerr << "Error: can not open the file" << std::endl; return ;}
	new_file << "    ^     \n   ^^^   \n  ^^^^^  \n ^^^^^^^ \n^^^^^^^^^\n   | |  \n   | |";
	new_file.close();
}