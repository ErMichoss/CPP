/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:31:53 by nicgonza          #+#    #+#             */
/*   Updated: 2024/09/05 13:53:56 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(){
	Point const a(2.0f, 3.0f);
	Point const b(3.0f, 2.0f);
	Point const c(0.0f, 0.0f);
	Point const point(2.0f, 2.0f);

	if (bsp(a, b, c, point) == true)
		std::cout << "El punto esta dentro" << std::endl;
	else
		std::cout << "El punto esta fuera" << std::endl;

	Point copy(point);
	std::cout << " X: " << copy.getX() << " Y: " << copy.getY() << std::endl;
}