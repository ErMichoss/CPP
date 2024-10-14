#include "RPN.hpp"

RPN::RPN(){}

RPN::~RPN(){}

RPN& RPN::operator = (RPN const& copy){}

RPN::RPN(RPN const& copy){}

void RPN::addToStack(int n){
	this->rpnStack.push(n);
}

std::stack<int> RPN::getStack(){
	return this->rpnStack;
}