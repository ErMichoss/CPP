#include "MutantStack.hpp"
#include <list>

int main(){
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	
	std::list<int> l;
	MutantStack<int> m;
	l.push_back(5);
	m.push(5);
	l.push_back(6);
	m.push(6);
	l.push_back(7);
	m.push(7);
	l.push_back(8);
	m.push(8);
	l.push_back(9);
	m.push(9);

	MutantStack<int>::iterator i = m.begin();
	MutantStack<int>::iterator ie = m.end();
	std::list<int>::iterator il = l.begin();

	while (i != ie){
		std::cout << *i << std::endl;
		std::cout << *il << std::endl;
		il++;
		i++;
	}

	return 0;
}