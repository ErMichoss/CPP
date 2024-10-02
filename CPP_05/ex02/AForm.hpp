#ifndef AForm_HPP
# define AForm_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
	private:
		std::string const name;
		bool is_sig;
		int const grade_sig;
		int	const grade_ex;
	public:
		AForm();
		AForm(AForm const& copy);
		AForm(std::string name, int grade_sig, int grade_ex, bool is_sig);
		~AForm();

		std::string getName() const;
		int	getGradeToSign() const;
		int	getGradeToExecute() const;
		bool getSigned() const;
		void beSigned(Bureaucrat& bureaucrat);
		virtual void execute(Bureaucrat const& executor) = 0;

		class GradeTooHighException: public std::exception{
			public:
			const char* what() const throw();
		};

		class GradeTooLowException: public std::exception{
			public:
			const char* what() const throw();
		};

		AForm& operator = (AForm const& copy);
};

std::ostream& operator << (std::ostream& out, AForm const& AForm);

#endif