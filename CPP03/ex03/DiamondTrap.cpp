/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:44:08 by marvin            #+#    #+#             */
/*   Updated: 2024/09/18 16:44:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/**
 * Default constructor
 */
DiamondTrap::DiamondTrap(){
	std::cout << "DiamondTrap Constructor has been called" << std::endl;
}

/**
 * Constructor to build DiamonTrap.
 * @param[in] name the name for the DiamondTrap
 */
DiamondTrap::DiamondTrap(std::string name): FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap Constructor has been called" << std::endl;
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
}

/**
 * Default destructor
 */
DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap destructor has been called" << std::endl;
}

/**
 * The ScavTrap attack
 */
void	DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

/**
 * The name of the beast
 */
void	DiamondTrap::whoAmI(){
	std::cout << "DiamondTrap name: " << this->name << std::endl;
	std::cout << "ClaTrap name: " << ClapTrap::name << std::endl;
}