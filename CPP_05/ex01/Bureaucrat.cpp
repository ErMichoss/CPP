#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
	std::cout << "Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const& name, int grade) : name(name){
	std::cout << "Bureaucrat constructor called" << std::endl;
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		this->grade = grade;
}

Bureaucrat& Bureaucrat::operator = (Bureaucrat const& copy) {
	this->grade = copy.grade;
	return *this;
}

Bureaucrat::Bureaucrat(Bureaucrat const& copy): name(copy.name){
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = copy;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Default Bureaucrat destructor called" << std::endl;
}

std::string Bureaucrat::getName() const{
	return this->name;
}

int	Bureaucrat::getGrade() const{
	return this->grade;
}

void	Bureaucrat::increaseGrade(){
	if ((this->grade - 1) < 1)
		throw GradeTooHighException();
	this->grade--;
}

void	Bureaucrat::decreaseGrade(){
	if ((this->grade + 1) > 150)
		throw GradeTooLowException();
	this->grade++;
}

void	Bureaucrat::sign(Form& f){
	try{
		f.beSigned(*this);
	} catch (std::exception const& e){
		std::cerr << this->getName() << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "Error: Grade Too High\n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "Error: Grade Too Low\n";
}

std::ostream& operator << (std::ostream& out, Bureaucrat const& bureaucrat){
	out << bureaucrat.getName() << " buraucrat grade: " << bureaucrat.getGrade();
	return (out);
}