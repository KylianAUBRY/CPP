/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:51:29 by kylian            #+#    #+#             */
/*   Updated: 2023/08/27 13:00:15 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType(void){
	std::string& ref = this->type;
	return (ref);
}

void Weapon::setType(std::string value_for_type){
	this->type = value_for_type;
}

Weapon::Weapon(std::string type_name){
	this->type = type_name;
}

Weapon::~Weapon(){
	
}