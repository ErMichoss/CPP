/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:55:37 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/23 17:56:46 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class Character: public ICharacter{
	private:
		AMateria* inventory[4];
		std::string name;
	public:
		Character();
		Character(std::string const name);
		Character(Character const& copy);
		~Character();
		
		Character& operator = (Character const& copy);
		
		std::string const& getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif