/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:59:43 by marvin            #+#    #+#             */
/*   Updated: 2024/09/18 15:59:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap{
	private:

	public:
		//Constructors
		ScavTrap();
		ScavTrap(std::string name);

		//Destructor
		~ScavTrap();

		void attack(const std::string &target);
		void	guardGate();
};

#endif