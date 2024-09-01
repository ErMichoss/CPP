/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 09:54:00 by nicgonza          #+#    #+#             */
/*   Updated: 2024/08/16 12:30:54 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(int argc, char *argv[]){
	std::string line;
	PhoneBook	phone_book;

	(void)argv;
	if (argc == 1){
		while (1){
			std::cout << "Enter one of the followin comands:" << std::endl;
			std::cout << "ADD" << std::endl;
			std::cout << "SEARCH" << std::endl;
			std::cout << "EXIT" << std::endl;
			if (!std::getline(std::cin, line))
				break;
			if (line == "ADD")
				phone_book.add();
			if (line == "SEARCH")
				phone_book.search();
			if (line == "EXIT")
				break;
		}
	}
	else
		std::cout << "This program does not accept arguments" << std::endl;
	return (0);
}