#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include "AForm.hpp"

class AForm;

class Bureaucrat{
	private:
		std::string const name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string const& name, int grade);
		Bureaucrat(Bureaucrat const& copy);
		~Bureaucrat();

		std::string getName() const;
		int	getGrade() const;
		void sign(AForm& f);
		void execute(AForm& f);
		class GradeTooHighException: public std::exception{
			public:
			const char* what() const throw();
		};

		class GradeTooLowException: public std::exception{
			public:
			const char* what() const throw();
		};

		void	increaseGrade();
		void	decreaseGrade();

		Bureaucrat& operator = (Bureaucrat const& copy);
};

std::ostream& operator << (std::ostream& out, Bureaucrat const& bureaucrat);

#endif