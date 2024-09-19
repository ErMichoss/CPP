/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:21:26 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/19 16:38:53 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal{
	protected:
		//Atributes
		std::string type;
	public:
		//Constructors
		Animal();
		Animal(const Animal& copy);
		
		//Destructor
		virtual ~Animal();

		//operator overload
		Animal& operator = (const Animal &copy);

		//Getter
		std::string getType();

		//member functions
		virtual void makeSound();
};

#endif