/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:45:10 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/05 13:35:39 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

/**
 * Funcion que determina si el punto esta dentro de un triangulo o no.
 * @param[in] a Instancia de la clase Point. Representa un punto equivalente con
 * uno de los vertices del triangulo.
 * @param[in] b Instancia de la clase Point. Representa un punto equivalente con
 * uno de los vertices del triangulo.
 * @param[in] c Instancia de la clase Point. Representa un punto equivalente con
 * uno de los vertices del triangulo.
 * @parama[in] point Instancia de la clase Point. Representa el punto que queremos
 * saber si esta dentro del triangulo
 *
 * @param areaABC Area del triangulo creado por los puntos a b y c.
 * @param areaPAB Area del triangulo creado por los puntos point a y b.
 * @param areaPBC Area del triangulo creado por los puntos point b y c.
 * @param areaPCA Area del triangulo creado por los puntos point c y a.
 *
 * @return Devuelve true si el punto esta dentro del triangulo, false si no.
*/
bool	bsp(Point const a, Point const b, Point const c, Point const point){
	float	areaABC;
	float	areaPAB;
	float	areaPBC;
	float	areaPCA;

	// Utilizamos el metodo de las areas
	// Se cacula el area del triangulo y luego el area de los triangulos creados con dos vertices del triangulo
	//y el punto dado.
	// Si la suma de los areas pequeñas es igual a el area del triangulo principal el punto esta dentro del
	//triangulo.
	areaABC = (0.5f) * fabs(a.getX()*(b.getY() - c.getY()) + b.getX()*(c.getY() - a.getY()) + c.getX()*(a.getY() - b.getY()));
	areaPAB = (0.5f) * fabs(point.getX()*(a.getY() - b.getY()) + a.getX()*(b.getY() - point.getY()) + b.getX()*(point.getY() - a.getY()));
	areaPBC = (0.5f) * fabs(point.getX()*(b.getY() - c.getY()) + b.getX()*(c.getY() - point.getY()) + c.getX()*(point.getY() - b.getY()));
	areaPCA = (0.5f) * fabs(point.getX()*(c.getY() - a.getY()) + c.getX()*(a.getY() - point.getY()) + a.getX()*(point.getY() - c.getY()));
	
	if (areaABC == (areaPAB + areaPBC + areaPCA))
		return true;
	else
		return false;
}
