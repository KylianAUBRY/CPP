/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:04:45 by kyaubry           #+#    #+#             */
/*   Updated: 2023/08/26 12:59:17 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact_class.hpp"

void	Contact::setFisrtName(std::string const firstName){
	this->FirstName = firstName;
}

void	Contact::setLastName(std::string const lastName){
	this->LastName = lastName;
}

void	Contact::setNickName(std::string const nickName){
	this->NickName = nickName;
}

void	Contact::setPhoneNumber(std::string const phoneNumber){
	this->PhoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(std::string const darkestSecret){
	this->DarkestSecret = darkestSecret;
}

std::string Contact::getFirstName(){
	return (this->FirstName);
}

std::string  Contact::getLastName(){
	return (this->LastName);
}

std::string  Contact::getNickName(){
	return (this->NickName);
}

std::string  Contact::getPhoneNumber(){
	return (this->PhoneNumber);
}

std::string  Contact::getDarkesSecret(){
	return (this->DarkestSecret);
}