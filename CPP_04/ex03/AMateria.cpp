/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:50:53 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/23 17:16:59 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const& type){
	std::cout << "AMateria constructor called" << std::endl;
	this->type = type;
}

AMateria& AMateria::operator = (AMateria const& copy){
	this->type = copy.type;
	return *this;
}

AMateria::AMateria(AMateria const& copy){
	std::cout << "AMateria constructor called" << std::endl;
	*this = copy;
}

AMateria::~AMateria(){
	std::cout << "AMateria destructor called" << std::endl;
}

std::string const& AMateria::getType() const{
	return this->type;
}

void	AMateria::use(ICharacter& target){
	std::cout << "* uses Materia on " << target.getName() << " *" << std::endl;
}