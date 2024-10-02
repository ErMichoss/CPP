#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm: public AForm{
	private:
		std::string target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const& copy);
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();

		PresidentialPardonForm& operator = (PresidentialPardonForm const& copy);

		void execute(Bureaucrat const& executor);
};

#endif