/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 09:54:00 by nicgonza          #+#    #+#             */
/*   Updated: 2024/08/16 12:30:54 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/**
 *  Default constuctor for the class.
 */
Contact::Contact(){
    return;
}

/**
 * Destructor for the Contact class.
 */
Contact::~Contact(){
    return;
}

/**
 *  Sets the first name of the contact.
 * 
 *  @param[in] str The string that contains the first name.
*/
void    Contact::setFirstName(std::string str){
    this->first_name = str;
}

/**
 *  Sets the last name of the contact.
 * 
 *  @param[in] str The string that contains the last name.
 */
void    Contact::setLastName(std::string str){
    this->last_name = str;
}

/**
 *  Sets the nickname of the contact.
 * 
 *  @param[in] str The string that contains the nickname.
 */
void    Contact::setNickname(std::string str){
    this->nickname = str;
}

/**
 *  Sets the phone number of the contact.
 * 
 *  @param[in] str The string that contains the phone number.
 */
void    Contact::setPhoneNumber(std::string str){
    this->phone_number = str;
}

/**
 *  Sets the darkest secret of the contact.
 * 
 *  @param[in] str The string that contains the darkest secret.
 */
void    Contact::setDarkestSecret(std::string str){
    this->darkest_secret = str;
}

/**
 *  Gets the first name of the contact.
 * 
 *  @return first_name.
 */
std::string  Contact::getFirstName(void){
    return this->first_name;
}

/**
 *  Gets the last name of the contact.
 * 
 *  @return last_name.
 */
std::string  Contact::getLastName(void){
    return this->last_name;
}


/**
 *  Gets the nickname of the contact.
 * 
 *  @return nickname.
 */
std::string  Contact::getNickname(void){
    return this->nickname;
}

/**
 *  Gets the phone number of the contact.
 * 
 *  @return phone_number.
 */
std::string  Contact::getPhoneNumber(void){
    return this->phone_number;
}

/**
 *  Gets the darkest secret of the contact.
 * 
 *  @return darkest_secret.
 */
std::string  Contact::getDarkestSecret(void){
    return this->darkest_secret;
}