/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:29:28 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/23 17:10:28 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice: public AMateria{
	public:
		Ice();
		Ice(Ice const& copy);
		~Ice();
		
		Ice& operator = (Ice const& copy);
		
		Ice*	clone() const;
		void	use(ICharacter& target);
};

#endif