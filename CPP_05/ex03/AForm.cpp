#include "AForm.hpp"

AForm::AForm(): grade_sig(0), grade_ex(0){
	std::cout << "AForm default constructor has been called" << std::endl;
}

AForm::AForm(std::string name, int grade_sig, int grade_ex, bool is_sig): name(name), grade_sig(grade_sig), grade_ex(grade_ex){
	std::cout << "AForm constructor has been called" << std::endl;
	if (grade_sig > 150 || grade_ex > 150){
		throw GradeTooLowException();
	}
	else if (grade_sig < 1 || grade_ex < 1){
		throw GradeTooHighException();
	}
	this->is_sig = is_sig;
}

AForm& AForm::operator = (AForm const& copy){
	this->is_sig = copy.is_sig;
	return *this;
}

AForm::AForm(AForm const& copy): name(copy.name), grade_sig(copy.grade_sig), grade_ex(copy.grade_ex){
	std::cout << "AForm copy contructor has been called" << std::endl;
	*this = copy;
}

AForm::~AForm(){
	std::cout << "AForm destructor has been called" << std::endl;
}

std::string AForm::getName() const{
	return this->name;
}

int AForm::getGradeToSign() const{
	return this->grade_sig;
}

int	AForm::getGradeToExecute() const{
	return this->grade_ex;
}

bool AForm::getSigned() const{
	return this->is_sig;
}

void AForm::beSigned(Bureaucrat& bureaucrat){
	if (bureaucrat.getGrade() > grade_sig){
		throw GradeTooLowException();
	}
	else if (is_sig == true){
		std::cerr << bureaucrat.getName() << " couldn't sign " << this->name << " because ";
		std::cerr << "it is already signed" << std::endl;
	}
	else{
		this->is_sig = true;
		std::cout << bureaucrat.getName() << " signed " << this->name << std::endl;
	}
}

const char* AForm::GradeTooHighException::what() const throw(){
	return "Error: Grade Too High";
}

const char* AForm::GradeTooLowException::what() const throw(){
	return "Error: Grade Too Low";
}

std::ostream& operator << (std::ostream& out, AForm const& AForm){
	return out << AForm.getName() << ". Grade to sign: " << AForm.getGradeToSign() << ". Grade to execute: " << AForm.getGradeToExecute() << ". Is signed? " << AForm.getSigned();
}
