/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:36:29 by kyaubry           #+#    #+#             */
/*   Updated: 2023/09/20 14:21:12 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap constructor called" << '\n';
	this->_name = "default name ScavTrap";
	this->_hitPoint = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor name called" << '\n';
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ClapTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy operator called" << '\n';
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << '\n';
}

void ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap " << this->_name;
	if (this->_hitPoint <= 0){
		std::cout << " can't attack " << target << "..is dead.." << '\n';
		return ;
	}
	else if (this->_energyPoints <= 0){
		std::cout << " don't have the energy " << "for attack" << '\n';
		return ;
	} 
	this->_energyPoints--;
	std::cout << " attack " << target << ", causing " << this->_attackDamage << " points of damage! " << '\n';
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap entered mode guardGate" << '\n';
}