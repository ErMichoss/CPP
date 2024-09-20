/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:02:43 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/20 14:58:41 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal{
	private:
		Brain* brain;
	public:
		//Constructors
		Dog();
		Dog(const Dog& copy);

		//Destructors
		~Dog();

		//Copy operator overload
		Dog& operator = (const Dog& copy);

		void setIdea(std::string idea, int index);

		void printBrain();
		
		//member functions
		void makeSound();
};

#endif