/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:02:43 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/19 15:14:30 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal{
	public:
		//Constructors
		Cat();
		Cat(const Cat& copy);

		//Destructors
		~Cat();

		//Copy operator overload
		Cat& operator = (const Cat& copy);

		//member functions
		void makeSound();
};

#endif