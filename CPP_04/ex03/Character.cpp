/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:32:25 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/23 18:48:20 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
	std::cout << "Character constructor has been called" << std::endl;
}

Character::Character(std::string const name){
	std::cout << "Character constructor has been called" << std::endl;
	this->name = name;
}

Character& Character::operator = (Character const& copy){
	AMateria* tmp;

	for (int i = 0; i < 4; i++){
		delete this->inventory[i];
	}

	this->name = copy.name;
	for (int i = 0; i < 4; i++){
		tmp = copy.inventory[i];
		this->inventory[i] = tmp;
		delete tmp;
	}

	return *this;
}

Character::Character(Character const& copy){
	std::cout << "Character constructor has been called" << std::endl;
	*this = copy;
}

Character::~Character(){
	std::cout << "Character destructor has been called" << std::endl;
	for (int i = 0; i < 4; i++){
		delete this->inventory[i];
	}
}

std::string const& Character::getName() const{
	return this->name;
}

void	Character::equip(AMateria* m){
	int i = 0;
	
	while (i < 4){
		if (this->inventory[i]->getType().empty()){
			this->inventory[i] = m;
			break;
		}
		i++;
	}
	if (i == 4)
		std::cout << "Your inventory is full, you have to drop something to equip this Materia" << std::endl;
}

void	Character::unequip(int idx){
	if (idx > 4 || idx < 1){
		std::cout << "The index you have provided is not valid, try again" << std::endl;
	}
	else{
		idx--;
		std::cout << "You have droped a " << this->inventory[idx]->getType() << std::endl;
		delete this->inventory[idx];
	}
}

void	Character::use(int idx, ICharacter& target){
	if (idx > 4 || idx < 1){
		std::cout << "The index you have provided is not valid, try again" << std::endl;
	}
	else if (this->inventory[idx - 1]->getType().empty()){
		std::cout << "You have nothing on that slot" << std::endl;
	}
	else{
		this->inventory[idx - 1]->use(target);
	}
}