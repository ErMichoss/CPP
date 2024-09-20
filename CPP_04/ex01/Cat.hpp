/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:02:43 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/20 14:58:41 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal{
	private:
		Brain* brain;
	public:
		//Constructors
		Cat();
		Cat(const Cat& copy);

		//Destructors
		~Cat();

		//Copy operator overload
		Cat& operator = (const Cat& copy);

		void setIdea(std::string idea, int index);

		void printBrain();
		
		//member functions
		void makeSound();
};

#endif