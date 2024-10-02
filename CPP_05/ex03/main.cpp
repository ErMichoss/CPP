#include "Intern.hpp"

int main(){
	Intern intern;
	Bureaucrat b("Mike", 1);

	AForm *p = intern.makeForm("presidential", "z28");
	std::cout << p <<std::endl;
	b.sign(*p);
	b.execute(*p);
	delete p;
	return 0;
}