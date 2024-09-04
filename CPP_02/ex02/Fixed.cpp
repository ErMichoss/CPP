/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 09:54:00 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/04 08:18:05 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	this->fixedValue = 0;
}

Fixed::Fixed(const Fixed &copy){
	*this = copy;
}

Fixed::Fixed(const int number){
	this->fixedValue = number << this->bits;
}

Fixed::Fixed(const float number){
	int power;

	power = 1 << bits;
	this->fixedValue = roundf(number * power);
}

Fixed::~Fixed(){
	return ;
}

void	Fixed::setRawBits(int const raw){
	this->fixedValue = raw;
}

int	Fixed::getRawBits(void) const{
	return (this->fixedValue);
}


int	Fixed::toInt() const{
	return (this->fixedValue >> bits);
}

float Fixed::toFloat() const{
	int 	power;
	float	number;

	power = 1 << this->bits;
	number = (float)this->fixedValue / power;
	return number;
}

Fixed& Fixed::operator = (const Fixed &copy){
	this->fixedValue = copy.getRawBits();
	return *this;
}

Fixed Fixed::operator + (const Fixed &other) const{
	Fixed result(this->toFloat() + other.toFloat());
	return result;
}

Fixed Fixed::operator - (const Fixed &other) const{
	Fixed result(this->toFloat() - other.toFloat());
	return result;
}

Fixed Fixed::operator * (const Fixed &other) const{
	Fixed result(this->toFloat() * other.toFloat());
	return result;
}

Fixed Fixed::operator / (const Fixed &other) const{
	Fixed result(this->toFloat() / other.toFloat());
	return result;
}

bool Fixed::operator > (const Fixed &other) const{
	if (this->fixedValue > other.fixedValue)
		return true;
	return false;
}

bool Fixed::operator < (const Fixed &other) const{
	if (this->fixedValue < other.fixedValue)
		return true;
	return false;
}

bool Fixed::operator >= (const Fixed &other) const{
	if (this->fixedValue >= other.fixedValue)
		return true;
	return false;
}

bool Fixed::operator <= (const Fixed &other) const{
	if (this->fixedValue <= other.fixedValue)
		return true;
	return false;
}

bool Fixed::operator == (const Fixed &other) const {
	if (this->fixedValue == other.fixedValue)
		return true;
	return false;
}

bool Fixed::operator != (const Fixed &other) const{
	if (this->fixedValue != other.fixedValue)
		return true;
	return false;
}

Fixed& Fixed::operator++ (){
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed Fixed::operator++ (int v){
	Fixed sum;

	sum = *this;
	if (!v)
		v = 1;
	this->setRawBits(this->getRawBits() + v);
	return sum;
}

Fixed& Fixed::operator-- (){
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

Fixed Fixed::operator-- (int v){
	Fixed res;

	res = *this;
	if (!v)
		v = 1;
	this->setRawBits(this->getRawBits() - v);
	return res;
}

Fixed& Fixed::min(Fixed &a, Fixed &b){
	if (a < b)
		return a;
	else
		return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b){
	if (a < b)
		return a;
	else
		return b;
}

const Fixed	&Fixed::min(Fixed const &a, Fixed const &b){
	if (a < b)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(Fixed const &a, Fixed const &b){
	if (a > b)
		return (a);
	return (b);
}

std::ostream& operator<< (std::ostream& out, const Fixed& fixed){
    out << fixed.toFloat();
    return (out);
}