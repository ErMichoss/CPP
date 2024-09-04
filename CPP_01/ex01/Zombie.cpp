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
 * The Constructor
 */
Zombie::Zombie(){
	return ;
}

/**
 * The Destructor, it prints the name of the zombie for debugging purposes
 */
Zombie::~Zombie(){
	std::cout << this->name << " return in grave" << std::endl;
}

/**
 * Sets the zombie's name.
 * @param[in] name the zombie's name
 * @param name the zombie's name attribute.
 */
void	Zombie::setName(std::string name){
	this->name = name;
}

/**
 * Gets the zombie's name.
 * @return the zombie's name.
 */
std::string	Zombie::getName(){
	return (this->name);
}

/**
 * The zombie aunnonces its self.
 * @param name the name of the zombie.
 */
void	Zombie::announce(void){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}