/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:07:56 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/20 14:22:21 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/**
 * Default constructor
*/
Cat::Cat(){
	std::cout << "The Cat default constructor has been called" << std::endl;
	this->brain = new Brain();
	this->type = "Cat";
}

/**
 * Copy operator overload
 */
Cat& Cat::operator = (const Cat& copy){
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
Cat::Cat(const Cat& copy){
	std::cout << "The Cat copy constructor has been called" << std::endl;
	this->brain = new Brain();
	*this = copy;
}

/**
 * The default destructor
 */
Cat::~Cat(){
	std::cout << "The Cat default destructor has been called" << std::endl;
	delete this->brain;
}

void	Cat::setIdea(std::string idea, int index){
	this->brain->setIdea(idea, index);
}

/**
 * Prints the brain.
 */
void	Cat::printBrain(){
	std::cout << this->type << ": thinks:" << std::endl;
	for (int i = 0; i < 100; i++){
		std::cout << this->brain->getIdea(i) << std::endl;
	}
}

void Cat::makeSound(){
	std::cout << this->type << ": Miau" << std::endl;
}