/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 09:54:00 by nicgonza          #+#    #+#             */
/*   Updated: 2024/08/16 12:30:54 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(){
	//Just declare a normal Zombie.
	Zombie foo("Foo");
	foo.announce();

	//Here, the Zombie is declare as a pointer.
	Zombie	*pointer = newZombie("Pointer");
	pointer->announce();

	//Here, the randomChump function is called.
	randomChump("Chump");
	
	//The destructor for Pointer is called.
	delete(pointer);
	
	return 0;
}