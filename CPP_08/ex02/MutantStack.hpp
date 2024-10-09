#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>

template<typename T>
class MutantStack: public std::stack<T>{
	private:
		MutantStack(MutantStack const& copy);

		MutantStack& operator = (MutantStack const& copy);
	public:
		MutantStack(){};
		~MutantStack(){};

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		
		iterator begin(){ return std::stack<T>::c.begin(); }
		iterator end(){ return std::stack<T>::c.end(); }

		reverse_iterator rbegin(){ return std::stack<T>::c.rbegin(); }
		reverse_iterator rend(){ return std::stack<T>::c.rend(); }

		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		const_iterator cbegin() const { return std::stack<T>::c.cbegin(); }
		const_iterator cend() const{ return std::stack<T>::c.cend(); }

		const_reverse_iterator  rcbegin() const { return std::stack<T>::c.rcbegin(); }
		const_reverse_iterator	rcend() const { return std::stack<T>::c.rcend(); }

		T const& bottom() { return *std::stack<T>::c.begin(); }
};

#endif