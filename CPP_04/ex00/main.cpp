/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:29:05 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/19 17:05:29 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(){
	Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();

	std::cout << std::endl << j->getType() << " " << std::endl;
	std::cout << std::endl<< i->getType() << " " << std::endl << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	delete meta;
	delete i;
	delete j;

	std::cout << std::endl;
	WrongAnimal* cat = new WrongCat();
	
	std::cout << cat->getType() << std::endl;
	cat->makeSound();

	delete cat;

	return (0);
}