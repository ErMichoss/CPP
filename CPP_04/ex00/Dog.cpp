/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:07:56 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/19 15:10:58 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/**
 * Default constructor
*/
Dog::Dog(){
	std::cout << "The Dog default constructor has been called" << std::endl;
	this->type = "Dog";
}

/**
 * Copy operator overload
 */
Dog& Dog::operator = (const Dog& copy){
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = copy.type;
	return *this;
}

/**
 * Copy constructor
 * @param[in] copy The object it is going to copy from.
 */
Dog::Dog(const Dog& copy){
	std::cout << "The Dog copy constructor has been called" << std::endl;
	*this = copy;
}

/**
 * The default destructor
 */
Dog::~Dog(){
	std::cout << "The Dog default destructor has been called" << std::endl;
}

void Dog::makeSound(){
	std::cout << this->type << ": Guau" << std::endl;
}