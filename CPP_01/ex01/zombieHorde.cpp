/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 09:54:00 by nicgonza          #+#    #+#             */
/*   Updated: 2024/08/16 12:30:54 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * Initialices the zombie horde.
 * @param[in] N the number of zombies that the horde has.
 * @param[in] name the name of the zombies of the horde.
 * @param horde the zombie horde.
 * @return the pointer to the first zombie of the horde.
 */
Zombie	*zombieHorde(int N, std::string name){
	Zombie	*horde = new Zombie[N];
	
	for (int i = 0; i < N; i++){
		horde[i].setName(name);
	}
	return(horde);
}
