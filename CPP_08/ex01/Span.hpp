#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>

class Span{
	private:
		unsigned int N;
		std::vector<int> array;
	public:
		Span();
		Span(unsigned int N);
		Span(Span const& copy);
		~Span();

		void addNumber(int num);
		unsigned int shortestSpan();
		unsigned int longestSpan();

		template<typename T>
		void addRange(T start, T end){
			while (start != end){
				addNumber(*start);
				start++;
			}	
		}

		Span& operator = (Span const& copy);
};

#endif