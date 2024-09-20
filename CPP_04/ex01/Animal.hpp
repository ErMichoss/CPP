/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:21:26 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/20 14:58:41 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class AAnimal{
	protected:
		//Atributes
		std::string type;
	public:
		//Constructors
		AAnimal();
		AAnimal(const AAnimal& copy);
		
		//Destructor
		virtual ~AAnimal();

		//operator overload
		AAnimal& operator = (const AAnimal &copy);

		//Getter
		std::string getType();

		//member functions
		virtual void makeSound();
};

#endif