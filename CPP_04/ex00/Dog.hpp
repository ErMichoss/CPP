/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:02:43 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/19 15:14:21 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal{
	public:
		//Constructors
		Dog();
		Dog(const Dog& copy);

		//Destructors
		~Dog();

		//Copy operator overload
		Dog& operator = (const Dog& copy);

		//member functions
		void makeSound();
};

#endif