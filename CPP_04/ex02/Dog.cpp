/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:07:56 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/20 14:42:49 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/**
 * Default constructor
*/
Dog::Dog(){
	std::cout << "The Dog default constructor has been called" << std::endl;
	this->brain = new Brain();
	this->type = "Dog";
}

/**
 * Copy operator overload
 */
Dog& Dog::operator = (const Dog& copy){
	std::string tmp;
	
	std::cout << "Copy assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++){
		tmp = copy.brain->getIdea(i);
		this->brain->setIdea(tmp, i);
	}
	this->type = copy.type;
	return *this;
}

/**
 * Copy constructor
 * @param[in] copy The object it is going to copy from.
 */
Dog::Dog(const Dog& copy){
	std::cout << "The Dog copy constructor has been called" << std::endl;
	this->brain = new Brain();
	*this = copy;
}

/**
 * The default destructor
 */
Dog::~Dog(){
	std::cout << "The Dog default destructor has been called" << std::endl;
	delete this->brain;
}

void	Dog::setIdea(std::string idea, int index){
	this->brain->setIdea(idea, index);
}

/**
 * Prints the brain.
 */
void	Dog::printBrain(){
	std::cout << this->type << ": thinks:" << std::endl;
	for (int i = 0; i < 100; i++){
		std::cout << this->brain->getIdea(i) << std::endl;
	}
}

void Dog::makeSound(){
	std::cout << this->type << ": Guau" << std::endl;
}