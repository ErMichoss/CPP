/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 09:54:00 by nicgonza          #+#    #+#             */
/*   Updated: 2024/08/16 12:30:54 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie{

	private:
		//Atributes
		std::string	name;

	public:
		//Constructor & Destructor
		Zombie();
		~Zombie();

		//Setters
		void		setName(std::string name);

		//Getters
		std::string	getName(void);

		//Class functions
		void		announce(void);
};

//Functions
Zombie	*zombieHorde(int N, std::string name);

#endif