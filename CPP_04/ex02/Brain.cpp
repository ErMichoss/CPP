/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:27:38 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/20 14:41:11 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/**
 * Default constructor
 */
Brain::Brain(){
	std::cout << "Brain default constructor has been called" << std::endl;
}


/**
 * Overload copy operator.
 * @param[in] copy The object it is going to copy from.
 */
Brain& Brain::operator = (const Brain& copy){
	std::string tmp;
	
	std::cout << "Copy assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++){
		tmp = copy.ideas[i];
		this->ideas[i] = tmp;
	}
	return *this;
}

/**
 * Copy constructor.
 * @param[in] copy The object s going to copy from
 */
Brain::Brain(const Brain& copy){
	std::cout << "Brain copy constructor has been called" << std::endl;
	*this = copy;
}

/**
 * Default destructor.
 */
Brain::~Brain(){
	std::cout << "Brain default destructor has been called" << std::endl;
}

/**
 * Sets an idea in the ideas array.
 * @param[in] idea The constent of the idea.
 * @param[in] index The place in the array the idea is going to take place.
 */
void	Brain::setIdea(std::string idea, int index){
	if (index < 0 || index > 100)
		std::cout << "index not valid" << std::endl;
	else
		this->ideas[index] = idea;
}

/**
 * Gets an idea of the ideas array.
 * @param[in] index the place in the array of the idea.
 * @return the idea.
 */
std::string	Brain::getIdea(int index){
	return this->ideas[index];
}
