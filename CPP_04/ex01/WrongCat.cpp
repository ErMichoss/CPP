/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:55:58 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/19 17:02:07 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout << "WrongCat default constructor has been called" << std::endl;
	this->type = "Cat";
}

WrongCat& WrongCat::operator = (const WrongCat& copy){
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = copy.type;
	return *this;
}

WrongCat::WrongCat(const WrongCat& copy){
	std::cout << "WrongCat copy constructor has been called" << std::endl;
	*this = copy;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat defautl destructor has been called" << std::endl;
}

void WrongCat::makeSound(){
	std::cout << "Miau" << std::endl;
}