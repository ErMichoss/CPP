/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 08:20:42 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/05 13:50:44 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <cmath>

class Fixed{
	private:
		int	fixedValue;
		static const int bits = 8;
	
	public:
		//Constructores & Destructores
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int number);
		Fixed(const	float number);
		~Fixed();

		//Setters
		void	setRawBits(int const raw);

		//Getters
		int		getRawBits(void) const;

		//Assigment operator overloads.
		Fixed&	operator = (const Fixed &copy);

		//Arithmetic operator overloads.
		Fixed	operator + (const Fixed &other) const;
		Fixed	operator - (const Fixed &other) const;
		Fixed	operator * (const Fixed &other) const;
		Fixed	operator / (const Fixed &other) const;

		//Comparison operator overloads.
		bool	operator > (const Fixed &other) const;
		bool	operator < (const Fixed &other) const;
		bool	operator >= (const Fixed &other) const;
		bool	operator <= (const Fixed &other) const;
		bool	operator == (const Fixed &other) const;
		bool	operator != (const Fixed &other) const;

		//increment and decrement operator.
		Fixed&	operator++();
    	Fixed	operator++(int v);
    	Fixed&	operator--();
    	Fixed	operator--(int v);

		//min & max
		static Fixed& min(Fixed &a, Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);

		//Methods
		int	toInt(void) const;
		float toFloat(void) const;

};

	//An overload of the insertion («) operator
	std::ostream& operator<< (std::ostream& out, const Fixed& fixed);

#endif