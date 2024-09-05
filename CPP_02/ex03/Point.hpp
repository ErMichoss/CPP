/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:56:42 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/05 13:33:01 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point{
	private:
		Fixed x;
		Fixed y;
	
	public:
		// Constructors & destructors
		Point();
		Point(const float x, const float y);
		Point(const Point &copy);
		~Point();

		//Setters
		void	setX(const float x);
		void	setY(const float y);

		//Getters
		float	getX() const;
		float	getY() const;

		// operator overload
		Point& operator= (const Point &copy);
};

//An overload of the insertion (<<) operator
std::ostream& operator<< (std::ostream& out, const Fixed& fixed);

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
