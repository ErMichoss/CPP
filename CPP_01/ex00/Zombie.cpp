/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 09:54:00 by nicgonza          #+#    #+#             */
/*   Updated: 2024/08/16 12:30:54 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * The Constructor, it gives the Zombie its name.
 * 
 * @param[in] name the name given to the zombie.
 * @param name the class atribute for the zombies name
 */
Zombie::Zombie(std::string name){
	this->name = name;
}

/**
 * The Destructor, it prints the name of the zombie for debugging purposes
 */
Zombie::~Zombie(){
	std::cout << this->name << " return in grave" << std::endl;
}

/**
 * The zombie aunnonces its self.
 * @param name the name of the zombie.
 */
void	Zombie::announce(void){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}