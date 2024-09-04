/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 08:19:58 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/02 08:20:07 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
	return ;
}

Harl::~Harl(){
	return ;
}

void	Harl::debug(void){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup";
	std::cout << " burger. I really do!" << std::endl;
}

void	Harl::info(void){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon";
	std::cout << " in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void){
	std::cout << "I think i deserve some extra bacon for free. I've been coming for years whereas ";
	std::cout << "you started working here since last month." << std::endl;
}

void	Harl::error(void){
	std::cout << "This is unnacceptable! I want to speak to the manager now." << std::endl;
}

/**
 * Llama las funciones a partir del nivel indicado
 * @param[in] level el nivel indicado
 * @param functions el array que contiene el puntero de las funciones.
 */
void	Harl::complain(std::string level){
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	levelNumber;
	void	(Harl::*functions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	levelNumber = 5;
	for (int i = 0; i < 4; i++){
		if (levels[i] == level){
			levelNumber = i;
			break ;
		}
	}
	levelNumber++;
	switch (levelNumber){
		case 1:
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*functions[0])();
			std::cout << std::endl;
		case 2:
			std::cout << "[ INFO ]" << std::endl;
			(this->*functions[1])();
			std::cout << std::endl;
		case 3:
			std::cout << "[ WARNING ]" << std::endl;
			(this->*functions[2])();
			std::cout << std::endl;
		case 4:
			std::cout << "[ ERROR ]" << std::endl;
			(this->*functions[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
