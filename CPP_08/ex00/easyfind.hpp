#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <vector>
# include <algorithm>
# include <exception>

template<typename T, typename C>
C	easyfind(T& container, int n){
	C found = std::find(container.begin(), container.end(), n);
	if (found == container.end()){throw std::logic_error("It was not found");}
	else{std::cout << "It has been found" << std::endl;}
	return (found);
}

#endif
