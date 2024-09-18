/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:03:14 by marvin            #+#    #+#             */
/*   Updated: 2024/09/18 16:03:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/**
 * Default contructor.
 */
ScavTrap::ScavTrap() : ClapTrap(){
	std::cout << "The ScavTrap constructor has been called" << std::endl;
}

/**
 * This constructor crates a ScavTrap
 * @param[in] name The name of the ScavTrap.
 */
ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "The ScavTrap constructor has been called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

/**
 * Default Destructor.
 */
ScavTrap::~ScavTrap(){
	std::cout << "The ScavTrap destructor has been called" << std::endl;
}

/**
 * ScavTrap attacks.
 * @param[in] target the target it attacks.
 */
void	ScavTrap::attack(const std::string& target){
	if (this->energy_points < 1)
		std::cout << "ScavTrap " << this->name << " has no energy points left" << std::endl;
	else if(this->hit_points < 1)
		std::cout << "ScavTrap " << this->name << " cannot do nothing, he's dead" << std::endl;
	else{
		(this->energy_points)--;
		std::cout << "ScavTrap " << this->name << " attacks ";
		std::cout << target << " causing ";
		std::cout << this->attack_damage << " points of damege" << std::endl;
	}
}

/**
 * ScavTrap guards the gate.
 * @param guard It keeps the value to see if it's guarding the gate.
 */
static int guard = 0;
void	ScavTrap::guardGate(){
	if (guard == 0){
		std::cout << "ScavTrap " << this->name << " is guarding the gate" << std::endl;
		guard = 1;
	}
	else
		std::cout << "ScavTrap " << this->name << " is already guarding the gate" << std::endl;
}