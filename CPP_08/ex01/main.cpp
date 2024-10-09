#include "Span.hpp"
#include <list>
#include <cstdlib>
#include <ctime>

// int main(){
// 	Span sp = Span(15);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;

// 	std::list<int> l;
// 	l.push_back(10);
// 	l.push_back(11);
// 	l.push_back(12);
// 	l.push_back(13);
// 	l.push_back(45);
// 	l.push_back(123);
// 	l.push_back(1000);
// 	l.push_back(100);
// 	l.push_back(114);
// 	l.push_back(113);

// 	sp.addRange(l.begin(), l.end());
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;

// 	return 0;
// }

//main +10.000

int main(){
	Span sp = Span(10001);
	srand(static_cast<unsigned int>(time(0)));
	for (int i = 0; i < 10.001; i++){
		sp.addNumber(rand() % 10000);
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
