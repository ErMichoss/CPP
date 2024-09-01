/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 09:54:00 by nicgonza          #+#    #+#             */
/*   Updated: 2024/08/16 12:30:54 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/**
 * The constructor for the class.
 * 
 * Sets the oldest contact to 0, just the standard;
 */
PhoneBook::PhoneBook(){
    this->oldest = 0;
    return;
}

/**
 * The destructor for the class.
 */
PhoneBook::~PhoneBook(){
    return;
}


/**
 * Adds a contact to the PhoneBook class.
 * 
 * @param i the index.
 * @param line the string that te user inputs.
 */
void    PhoneBook::add(){
    int         i;
    std::string line;

    i = 0;
    while(PhoneBook::contacts[i].getFirstName().empty() != true)
        i++;
    if (i > 7){
        i = oldest;
        this->oldest++;
        if (this->oldest > 7)
            this->oldest = 0;
    }
    while (line.empty() == true){
        std::cout << "Insert first name: ";
        if (!std::getline(std::cin, line))
            break;
        if (line.empty() == true)
            std::cout << "Sorry, is mandatory that you fill all the fields" << std::endl;
    }
    this->contacts[i].setFirstName(line);
    line.clear();
    while (line.empty() == true){
        std::cout << "Insert last name: ";
        if (!std::getline(std::cin, line))
            break;
        if (line.empty() == true)
            std::cout << "Sorry, is mandatory that you fill all the fields" << std::endl;
    }
    this->contacts[i].setLastName(line);
    line.clear();
    while (line.empty() == true){
        std::cout << "Insert nickname: ";
        if (!std::getline(std::cin, line))
            break;
        if (line.empty() == true)
            std::cout << "Sorry, is mandatory that you fill all the fields" << std::endl;
    }
    this->contacts[i].setNickname(line);
    line.clear();
    while (line.empty() == true){
        std::cout << "Insert phone number: ";
        if (!std::getline(std::cin, line))
            break;
        if (line.empty() == true)
            std::cout << "Sorry, is mandatory that you fill all the fields" << std::endl;
    }
    this->contacts[i].setPhoneNumber(line);
    line.clear();
    while (line.empty() == true){
        std::cout << "Insert darkest secret: ";
        if (!std::getline(std::cin, line))
            break;
        if (line.empty() == true)
            std::cout << "Sorry, is mandatory that you fill all the fields" << std::endl;
    }
    this->contacts[i].setDarkestSecret(line);
    line.clear();
    std::cout << "Contact setted in the Phone Book" << std::endl;
}

/**
 * Firstly displays the contacts then searches for the information of the 
 * contact that matches the index inputed by the user.
 * 
 * @param i iterator
 * @param line string used to edit the displayable string if it's length surpases 10 char.
 */
void   PhoneBook::search(){
	int			i;
	std::string line;

	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;

	i = 0;
	while (i < 8 && this->contacts[i].getFirstName().empty() != true){
		std::cout << "|----------|----------|----------|----------|" << std::endl;
		std::cout << "|" << std::setw(10) << i + 1;
		line = this->contacts[i].getFirstName();
		if (line.length() > 10)
			line = line.substr(0,9) + ".";
		std::cout << "|" << std::setw(10) << line;
		line = this->contacts[i].getLastName();
		if (line.length() > 10)
			line = line.substr(0, 9) + ".";
		std::cout << "|" << std::setw(10) << line;
		line = this->contacts[i].getNickname();
		if (line.length() > 10)
			line = line.substr(0, 9) + ".";
		std::cout << "|" << std::setw(10) << line << "|" << std::endl;
		i++;
	}
	std::cout << "|----------|----------|----------|----------|" << std::endl << std::endl;
	std::cout << "input search index: ";
	std::cin >> i;
	i--;
	if (i > 7 || i < 0)
		std::cout << "Sorry the index inputed is out of range" << std::endl;
	else if (this->contacts[i].getFirstName().empty() == true)
		std::cout << "Sorry there is no contac for the index you entered" << std::endl;
	else{
		std::cout << "first name: " << this->contacts[i].getFirstName() << std::endl;
		std::cout << "last name " << this->contacts[i].getLastName() << std::endl;
		std::cout << "nickname: " << this->contacts[i].getNickname() << std::endl;
		std::cout << "phone number: " << this->contacts[i].getPhoneNumber() << std::endl;
		std::cout << "darkest secret: " << this->contacts[i].getDarkestSecret() << std::endl;
	}
}