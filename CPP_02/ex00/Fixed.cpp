/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 09:54:00 by nicgonza          #+#    #+#             */
/*   Updated: 2024/08/16 12:30:54 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->fixedValue = 0;
}

Fixed::Fixed(const Fixed &copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedValue = raw;
}

int	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedValue);
}

Fixed& Fixed::operator = (const Fixed &copy){
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedValue = copy.getRawBits();
	return *this;
}