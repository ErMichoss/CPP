/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:44:01 by marvin            #+#    #+#             */
/*   Updated: 2024/09/18 15:44:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	ClapTrap clapi("Clapi");

	std::cout << std::endl << "ClapTrap status:" << std::endl;
	clapi.showAttributes();
	std::cout << std::endl;
	clapi.attack("Cuadrado Rajoy");
	std::cout << std::endl;
	clapi.takeDamage(2);
	std::cout << std::endl;
	clapi.beRepaired(5);
	std::cout << std::endl << "ClapTrap status:" << std::endl;
	clapi.showAttributes();
}