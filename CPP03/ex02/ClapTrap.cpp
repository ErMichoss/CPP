/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:16:22 by marvin            #+#    #+#             */
/*   Updated: 2024/09/18 15:16:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/**
 * Default constructor.
 */
ClapTrap::ClapTrap(){
	std::cout << "The ClapTrap constructor has been called" << std::endl;
}

/**
 * This constructor takes a name a creates a ClapTrap.
 * @param[in] name The name for the ClapTrap.
 */
ClapTrap::ClapTrap(std::string name){
	std::cout << "The ClapTrap constructor has been called" << std::endl;
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

/**
 * Default destructor
 */
ClapTrap::~ClapTrap(){
	std::cout << "The ClapTrap destructor has been called" << std::endl;
}

/**
 * ClapTrap attacks a target displaying a message.
 * @param[in] target The target of teh attack.
 */
void	ClapTrap::attack(const std::string& target)
{
	if (this->energy_points < 1)
		std::cout << "ClapTrap " << this->name << " has no energy points left" << std::endl;
	else if(this->hit_points < 1)
		std::cout << "ClapTrap " << this->name << " cannot do nothing, he's dead" << std::endl;
	else{
		(this->energy_points)--;
		std::cout << "ClapTrap " << this->name << " attacks ";
		std::cout << target << " causing ";
		std::cout << this->attack_damage << " points of damege" << std::endl;
	}
}

/**
 * ClapTrap takes damage, if its helth drops bellow 0 it dies.
 * @param[in] amount The amount of damage it takes.
 */
void	ClapTrap::takeDamage(unsigned int amount){
	if (this->hit_points < 1)
		std::cout << "ClapTrap " << this->name << " cannot do nothing, he's dead" << std::endl;
	else{
		std::cout << "ClapTrap " << this->name << " took " << amount << " damage" << std::endl;
		if (amount > this->hit_points){
			std::cout << "ClapTrap " << this->name << " died" << std::endl;
			this->hit_points = 0;
		}
		else
			this->hit_points = this->hit_points - amount;
	}
}

/**
 * ClapTrap repaires it self.
 * @param[in] amount The amount of hit points it repaires.
 */
void	ClapTrap::beRepaired(unsigned int amount){
	if (this->energy_points < 1)
		std::cout << "ClapTrap " << this->name << " has no energy points left" << std::endl;
	else if (this->hit_points < 1)
		std::cout << "ClapTrap " << this->name << " cannot do nothing, he's dead" << std::endl;
	else{
		std::cout << "ClapTrap " << this->name << " has repaired " << amount << " hit points" << std::endl;
		this->hit_points = this->hit_points + amount;
		this->energy_points--;
	}
}

/**
 * Shows the ClapTrap attributes
 */
void	ClapTrap::showAttributes(){
	std::cout << "Name: " << this->name << " Hit points: " << this->hit_points << " Energy points: ";
	std::cout << this->energy_points << " Attack damage: " << this->attack_damage << std::endl;
}