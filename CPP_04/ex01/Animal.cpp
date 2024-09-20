/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:21:14 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/19 16:51:52 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/**
 * Default constructor.
 */
Animal::Animal(){
	std::cout << "The Animal default constructor has been called" << std::endl;
	this->type = "default";
}

/**
 * Copy constructor.
 * @param[in] copy The object it's going to copy.
 */
Animal::Animal(const Animal& copy){
	std::cout << "The Animal copy constructor has been called" << std::endl;
	*this = copy;
}

/**
 * The default destructor.
 */
Animal::~Animal(){
	std::cout << "The Animal default destructor has been called" << std::endl;
}

/**
 * An assigment operator overload
 * @param copy The object it is going to equal it self to.
*/
Animal& Animal::operator = (const Animal& copy){
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = copy.type;
	return *this;
}

void	Animal::makeSound(){
	std::cout << this->type << ": Animal Sound" << std::endl;
}

std::string Animal::getType(){
	return this->type;
}