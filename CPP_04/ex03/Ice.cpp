/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:04:48 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/23 17:17:02 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("Ice"){
	std::cout << "Ice constructor has been called" << std::endl;
}

Ice& Ice::operator = (Ice const& copy){
	this->type = copy.type;
	return *this;
}

Ice::Ice(Ice const& copy){
	std::cout << "Ice constructor has been called" << std::endl;
	*this = copy;
}

Ice::~Ice(){
	std::cout << "Ice destructor has been called" << std::endl;
}

Ice*	Ice::clone() const{
	Ice ice(*this);
	return &ice;
}

void	Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}