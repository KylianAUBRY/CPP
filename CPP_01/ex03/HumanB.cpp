/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:08:09 by kylian            #+#    #+#             */
/*   Updated: 2023/08/27 13:03:52 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack(void){
	if (!_weapon)
		std::cout << this->_name << " attack with their... in fact they have nothing" << '\n';
	else
		std::cout << this->_name << " attacks with their " << _weapon->getType() << '\n';
}

void HumanB::setWeapon(Weapon &weapon){
	this->_weapon = &weapon;
}

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL){
}

HumanB::~HumanB(){
	
}