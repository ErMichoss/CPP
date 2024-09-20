/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:29:28 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/20 16:02:07 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure: public AMateria{
	public:
		Cure();
		Cure(Cure const& copy);
		~Ice();
		
		Cure& operator = (Cure const& copy);
		
		Cure*	clone();
		void	use(ICharacter& target);
};

#endif