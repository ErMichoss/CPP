#include "Form.hpp"

Form::Form(): grade_sig(0), grade_ex(0){
	std::cout << "Form default constructor has been called" << std::endl;
}

Form::Form(std::string name, int grade_sig, int grade_ex): name(name), grade_sig(grade_sig), grade_ex(grade_ex){
	std::cout << "Form constructor has been called" << std::endl;
	if (grade_sig > 150 || grade_ex > 150){
		throw GradeTooLowException();
	}
	else if (grade_sig < 1 || grade_ex < 1){
		throw GradeTooHighException();
	}
	this->is_sig = false;
}

Form& Form::operator = (Form const& copy){
	this->is_sig = copy.is_sig;
	return *this;
}

Form::Form(Form const& copy): name(copy.name), grade_sig(copy.grade_sig), grade_ex(copy.grade_ex){
	std::cout << "Form copy contructor has been called" << std::endl;
	*this = copy;
}

Form::~Form(){
	std::cout << "Form destructor has been called" << std::endl;
}

std::string Form::getName() const{
	return this->name;
}

int Form::getGradeToSign() const{
	return this->grade_sig;
}

int	Form::getGradeToExecute() const{
	return this->grade_ex;
}

bool Form::getSigned() const{
	return this->is_sig;
}

void Form::beSigned(Bureaucrat& bureaucrat){
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

const char* Form::GradeTooHighException::what() const throw(){
	return "Error: Grade Too High";
}

const char* Form::GradeTooLowException::what() const throw(){
	return "Error: Grade Too Low";
}

std::ostream& operator << (std::ostream& out, Form const& Form){
	return out << Form.getName() << ". Grade to sign: " << Form.getGradeToSign() << ". Grade to execute: " << Form.getGradeToExecute() << ". Is signed? " << Form.getSigned();
}
