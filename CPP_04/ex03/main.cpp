/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:38:43 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/23 18:51:04 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"

int main(){
	Character bob("Bob");
	Character mike("Mike");

	AMateria *ice = new Ice();
	AMateria *cure = new Cure();
	
	bob.equip(ice);
	bob.equip(cure);

	bob.use(1, mike);
	bob.unequip(2);

	MateriaSource ms;
	ms.learnMateria(ice);
	
	AMateria *iceClone = ms.createMateria("Ice");

	bob.equip(iceClone);
}