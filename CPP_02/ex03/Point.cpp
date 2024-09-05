/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:30:36 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/05 13:58:39 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/**
 * Default constructor, it set x & y to 0.
*/
Point::Point() : x(0), y(0){
}

/**
 * Constructor that takes as parameters two constant floating-point numbers.
 * It initializes x and y with those parameters.
 * @param[in] x The value x is going to be initialized with.
 * @param[in] y The value y is going to be initialized woth.
*/
Point::Point(const float x, const float y): x(x), y(y){
}

/**
 * Copy constructor.
 * @param[in] copy The reference to the class Point object that is going to be copied.
*/
Point::Point(const Point &copy){
	*this = copy;
}

/**
 * Default Destructor.
*/
Point::~Point(){
	return ;
}

/**
 * Copy assigment operator overload.
 * @param[in] copy The reference to the class Point object that is going to be copied.
*/
Point& Point::operator= (const Point &copy){
	this->x = Fixed((float const)copy.x.toFloat());
	this->y = Fixed((float const)copy.y.toFloat());
	return *this;
}

void Point::setX(const float x){
	this->x = Fixed(x);
}

void Point::setY(const float y){
	this->y = Fixed(y);
}

float Point::getX() const {
	return (this->x.toFloat());
}

float Point::getY() const {
	return (this->y.toFloat());
}

