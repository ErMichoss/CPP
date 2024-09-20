/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:29:28 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/20 16:16:19 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "Materia.hpp"
# include "ICharacter.hpp"

class Cure: public Materia{
	public:
		Cure();
		Cure(Cure const& copy);
		~Cure();
		
		Cure& operator = (Cure const& copy);
		
		Cure*	clone();
		void	use(ICharacter& target);
};

#endif