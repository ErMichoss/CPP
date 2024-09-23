/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:33:26 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/23 18:07:13 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource{
	private:
		AMateria* materias[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const& copy);
		~MateriaSource();

		MateriaSource& operator = (MateriaSource const& copy);

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const& type);
};

#endif