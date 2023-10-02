/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:04:45 by kylian            #+#    #+#             */
/*   Updated: 2023/08/27 13:02:48 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack(void){
	std::cout << this->_name << " attacks with their " << _weapon.getType() << '\n';
}

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon){
}

/*
HumanA::HumanA(std::string name, Weapon weapon){
	this->name = name;
	this->weapon = weapon;
}*/


HumanA::~HumanA(){
	
}