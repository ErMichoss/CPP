#ifndef RPN_HPP
# define RPN_HPP

# include <stack>
# include <iostream>

class RPN{
	private:
		std::stack<int> rpnStack;
		RPN& operator = (RPN const& copy);
		RPN(RPN const& copy);
		
	public:
		RPN();
		~RPN();

		void addToStack(int n);
		std::stack<int> getStack();
		void sum();
		void res();
		void mult();
		int div();
};

#endif