/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:07:56 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/19 15:11:13 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/**
 * Default constructor
*/
Cat::Cat(){
	std::cout << "The Cat default constructor has been called" << std::endl;
	this->type = "Cat";
}

/**
 * Copy operator overload
 */
Cat& Cat::operator = (const Cat& copy){
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = copy.type;
	return *this;
}

/**
 * Copy constructor
 * @param[in] copy The object it is going to copy from.
 */
Cat::Cat(const Cat& copy){
	std::cout << "The Cat copy constructor has been called" << std::endl;
	*this = copy;
}

/**
 * The default destructor
 */
Cat::~Cat(){
	std::cout << "The Cat default destructor has been called" << std::endl;
}

void Cat::makeSound(){
	std::cout << this->type << ": Miau" << std::endl;
}