#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base* generate(void){
	int n = rand() % 3;
	if (n == 0){std::cout << "A" << std::endl; return new A();}
	else if (n == 1){std::cout << "B" << std::endl; return new B();}
	else{std::cout << "C" << std::endl; return new C();}
}

void identify(Base* p){
	if (A* a = dynamic_cast<A*>(p)){
		std::cout << "La clase es de tipo A" << std::endl;
	}else if (B* b = dynamic_cast<B*>(p)){
		std::cout << "La clase es de tipo B" << std::endl;
	}else{
		std::cout << "La clase es de tipo C" << std::endl;
	}
}

void identify(Base& p){
	try {
        A& a = dynamic_cast<A&>(p);
        std::cout << "La clase es de tipo A" << std::endl;
		(void)a;
    } catch (std::exception&) {
        try {
            B& b = dynamic_cast<B&>(p);
            std::cout << "La clase es de tipo B" << std::endl;
			(void)b;
        } catch (std::exception&) {
            std::cout << "La clase es de tipo C" << std::endl;
        }
    }
}

int main(){
	std::srand(static_cast<unsigned int>(std::time(0)));

	identify(generate());
	Base* b = generate();
	identify(*b);
}