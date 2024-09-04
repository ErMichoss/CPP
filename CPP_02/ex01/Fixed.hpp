/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 09:54:00 by nicgonza          #+#    #+#             */
/*   Updated: 2024/08/16 12:30:54 by nicgonza         ###   ########.fr       */
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

		//A copy assignment operator overload.
		Fixed& operator = (const Fixed &copy);

		//Methods
		int	toInt(void) const;
		float toFloat(void) const;

};

	//An overload of the insertion («) operator
	std::ostream& operator<< (std::ostream& out, const Fixed& fixed);

#endif