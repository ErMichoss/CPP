/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 09:54:00 by nicgonza          #+#    #+#             */
/*   Updated: 2024/08/16 12:30:54 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA(){
	return;
}

HumanA::HumanA(Weapon &weapon, std::string name) : weapon(weapon){
	this->name = name;
}

Weapon& HumanA::getWeapon(){
	return(this->weapon);
}

void	HumanA::attack(){
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}