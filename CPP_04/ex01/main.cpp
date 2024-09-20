/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:29:05 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/20 14:58:41 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(){
	AAnimal *animals[6];
	
	for (int i = 0; i < 6; i++){
		if (i < 3){animals[i] = new Dog();}
		else{animals[i] = new Cat();}
	}	
	
	for (int i = 0; i < 6; i++){
		delete animals[i];
	}
	
	Dog perro;
	perro.setIdea("I don't want to set this world on fire", 0);
	perro.setIdea("Zzzzzz....", 1);
	perro.printBrain();
	
	Dog perro2(perro);
	perro.printBrain();
	
	return (0);
}