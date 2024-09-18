/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:25:57 by marvin            #+#    #+#             */
/*   Updated: 2024/09/18 16:25:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/**
 * Default constructor.
 */
FragTrap::FragTrap() : ClapTrap(){
	std::cout << "The FragTrap constructor has been called" << std::endl;
}

/**
 * This constructor creates a FragTrap
 * @param[in] name the name of the FragTrap
 */
FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << "The FragTrap constructor has been called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 30;
}

FragTrap::~FragTrap(){
	std::cout << "The FragTrap destructor has been called" << std::endl;
}

void	FragTrap::highFivesGuys(){
	std::cout << this->name << " give me a high five guys!!" << std::endl;
}