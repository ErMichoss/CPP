/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:57:49 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/23 18:20:18 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	std::cout << "MateriaSource constructor has been called" << std::endl;
}

MateriaSource& MateriaSource::operator = (MateriaSource const& copy){
	AMateria *tmp;

	for (int i = 0; i < 4; i++){
		delete this->materias[i];
	}

	for (int i = 0; i < 4; i++){
		tmp = copy.materias[i];
		this->materias[i] = tmp;
		delete tmp;
	}
	return *this;
}

MateriaSource::MateriaSource(MateriaSource const& copy){
	std::cout << "MateriaSource constructor has been called" << std::endl;
	*this = copy;
}

MateriaSource::~MateriaSource(){
	std::cout << "MateriaSource destructor has been called" << std::endl;
}

void	MateriaSource::learnMateria(AMateria* m){
	int i = 0;

	while (i < 4){
		if (this->materias[i]->getType().empty()){
			materias[i] = m;
			break;
		}
		i++;
	}
	if (i == 4){
		std::cout << "You cant learn more materias" << std::endl;
	}
}

AMateria* MateriaSource::createMateria(std::string const& type){
	int i = 0;

	while (i < 4){
		if (!this->materias[i]->getType().empty() && this->materias[i]->getType() == type){
			return this->materias[i]->clone();
		}
		i++;
	}
	std::cout << "The Materia you tried to create isnt in the memory" << std::endl;
	return NULL;
}