#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	private:
		std::string const name;
		bool is_sig;
		int const grade_sig;
		int	const grade_ex;
	public:
		Form();
		Form(Form const& copy);
		Form(std::string name, int grade_sig, int grade_ex);
		~Form();

		std::string getName() const;
		int	getGradeToSign() const;
		int	getGradeToExecute() const;
		bool getSigned() const;
		void beSigned(Bureaucrat& bureaucrat);

		class GradeTooHighException: public std::exception{
			public:
			const char* what() const throw();
		};

		class GradeTooLowException: public std::exception{
			public:
			const char* what() const throw();
		};

		Form& operator = (Form const& copy);
};

std::ostream& operator << (std::ostream& out, Form const& form);

#endif