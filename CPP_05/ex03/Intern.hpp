#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern{
	private:
		AForm* createRobotomyRequest(std::string target);
		AForm* createShrubberyCreation(std::string target);
		AForm* createPresidentialPardon(std::string target);
	public:
		Intern();
		Intern(Intern const& copy);
		~Intern();

		Intern& operator = (Intern const& copy);

		AForm* makeForm(std::string name, std::string target);
};

#endif