/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 09:54:00 by nicgonza          #+#    #+#             */
/*   Updated: 2024/08/16 12:30:54 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


/**
 * Crates a new Zombie.
 * @param[in] name The name of the new zombie.
 * @param newZombie The pointer to the new zombie.
 * @return The pointer of the new zombie that is created.
 */
Zombie	*newZombie(std::string name){
	Zombie* newZombie;

	newZombie = new Zombie(name);
	return (newZombie);
}