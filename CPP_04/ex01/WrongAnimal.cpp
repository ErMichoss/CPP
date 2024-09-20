/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:39:16 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/19 17:03:26 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/**
 * Default constructor
 */
WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal default constructor has been called" << std::endl;
	this->type = "default";
}

/**
 * Copy operator override
 * @param[in] copy The object is going to copy from
 * @return this object
 */
WrongAnimal& WrongAnimal::operator = (const WrongAnimal& copy){
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = copy.type;
	return *this;
}

/**
 * Copy constructor
 * @param[in] copy The object is going to copy from.
 */
WrongAnimal::WrongAnimal(const WrongAnimal& copy){
	std::cout << "WrongAnimal copy constructor has been called" << std::endl;
	*this = copy;
}

/**
 * Default destructor
 */
WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal default destructor has been called" << std::endl;
}

void	WrongAnimal::makeSound(){
	std::cout << "Animal Sounds" << std::endl;
}

std::string WrongAnimal::getType(){
	return this->type;
}