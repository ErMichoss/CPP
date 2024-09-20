/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:21:14 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/20 14:58:41 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/**
 * Default constructor.
 */
AAnimal::AAnimal(){
	std::cout << "The Animal default constructor has been called" << std::endl;
	this->type = "default";
}

/**
 * Copy constructor.
 * @param[in] copy The object it's going to copy.
 */
AAnimal::AAnimal(const AAnimal& copy){
	std::cout << "The Animal copy constructor has been called" << std::endl;
	*this = copy;
}

/**
 * The default destructor.
 */
AAnimal::~AAnimal(){
	std::cout << "The Animal default destructor has been called" << std::endl;
}

/**
 * An assigment operator overload
 * @param copy The object it is going to equal it self to.
*/
AAnimal& AAnimal::operator = (const AAnimal& copy){
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = copy.type;
	return *this;
}

std::string AAnimal::getType(){
	return this->type;
}