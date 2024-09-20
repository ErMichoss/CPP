/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:11:10 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/20 16:15:39 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
# define MATERIA_HPP

#include "AMateria.hpp"

class Materia: public AMateria{
	protected:
		std::string type;
	public:
		Materia(std::string const& type);
		~Materia();

		std::string const& getType() const; //Returns the materia type

		virtual Materia* clone() const;
		virtual void use(ICharacter& target);
};

#endif