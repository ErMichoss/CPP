#include "RPN.hpp"

RPN::RPN(){}

RPN::~RPN(){}

RPN& RPN::operator = (RPN const& copy){
	(void)copy;
	return *this;	
}

RPN::RPN(RPN const& copy){(void)copy;}

void RPN::addToStack(int n){
	this->rpnStack.push(n);
}

std::stack<int> RPN::getStack(){
	return this->rpnStack;
}

void RPN::sum(){
	int total;
	int num1;
	int num2;

	num1 = this->rpnStack.top();
	this->rpnStack.pop();
	num2 = this->rpnStack.top();
	this->rpnStack.pop();
	total = num1 + num2;
	this->rpnStack.push(total);
}

void RPN::res(){
	int total;
	int num1;
	int num2;

	num1 = this->rpnStack.top();
	this->rpnStack.pop();
	num2 = this->rpnStack.top();
	this->rpnStack.pop();
	total = num1 - num2;
	this->rpnStack.push(total);
}

void RPN::mult(){
	int total;
	int num1;
	int num2;

	num1 = this->rpnStack.top();
	this->rpnStack.pop();
	num2 = this->rpnStack.top();
	this->rpnStack.pop();
	total = num1 * num2;
	this->rpnStack.push(total);
}

int RPN::div(){
	int total;
	int num1;
	int num2;

	num1 = this->rpnStack.top();
	this->rpnStack.pop();
	num2 = this->rpnStack.top();
	this->rpnStack.pop();
	if (num2 == 0){
		std::cerr << "Error" << std::endl;
		return 1;
	}
	total = num1 / num2;
	this->rpnStack.push(total);
	return 0;
}