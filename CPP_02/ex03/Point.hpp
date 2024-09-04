/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:56:42 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/04 09:11:50 by nicgonza         ###   ########.fr       */
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
		Point();
		Point(const float x, const float y);
		Point(const Point &copy);
		~Point();

		Point& operator= (const Point &copy);
};

#endif
