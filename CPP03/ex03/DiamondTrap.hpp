/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:43:01 by marvin            #+#    #+#             */
/*   Updated: 2024/09/18 16:43:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap{
	private:
		//Attributtes
		std::string name;

	public:
		//Constructors
		DiamondTrap();
		DiamondTrap(std::string name);

		//Destructor
		~DiamondTrap();

		void	attack(const std::string& target);
		void	whoAmI();
};

#endif