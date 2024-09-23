/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:18:31 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/23 17:31:43 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("Cure"){
	std::cout << "Cure constructor has been called" << std::endl;
}

Cure& Cure::operator = (Cure const& copy){
	this->type = copy.type;
	return *this;
}

Cure::Cure(Cure const& copy){
	std::cout << "Cure constructor has been called" << std::endl;
	*this = copy;
}

Cure::~Cure(){
	std::cout << "Cure destructor has been called" << std::endl;
}

Cure* Cure::clone() const{
	Cure cure(*this);
	return &cure;
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}