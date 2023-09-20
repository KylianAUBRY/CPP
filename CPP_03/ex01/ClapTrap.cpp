/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:35:04 by kyaubry           #+#    #+#             */
/*   Updated: 2023/09/20 14:22:45 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Constructor called" << '\n';
	this->_name = "default name";
	this->_hitPoint = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap Constructor name called" << '\n';
	this->_name = name;
	this->_hitPoint = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}
ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "ClapTrap Copy operator called" << '\n';
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ClapTrap Copy assignment operator called" << '\n';
	if (this != &other)
	{
		this->_name = other.getName();
		this->_hitPoint = other.getHitPoint(); 
		this->_energyPoints = other.getEnergyPoints();
		this->_attackDamage = other.getAttackDamage();
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << '\n';
}

std::string ClapTrap::getName() const
{
	return this->_name;
}

int		ClapTrap::getHitPoint(void) const
{
	return this->_hitPoint;
}

int		ClapTrap::getEnergyPoints(void) const
{
	return this->_energyPoints;	
}

int		ClapTrap::getAttackDamage(void) const
{
	return this->_attackDamage;
}

void	ClapTrap::setHitPoint(int value)
{
	this->_hitPoint = value;
}

void	ClapTrap::setEnergyPoints(int value)
{
	this->_energyPoints = value;
}

void	ClapTrap::setAttackDamage(int value)
{
	this->_attackDamage = value;
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << this->_name;
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

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout  << this->_name;
	if (this->_hitPoint <= 0){
		std::cout << " can't take damage" << '\n';
		return ;
	}
	std::cout << " takes " << amount << " damage" << '\n';
	this->_hitPoint -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
	std::cout << this->_name;
	if (this->_hitPoint <= 0){
		std::cout << " can't repaire " << "..is dead.." << '\n';
		return ;
	}
	else if (this->_energyPoints <= 0){
		std::cout << " don't have the energy " << "for repair it self" << '\n';
		return ;
	}
	this->_energyPoints--;
	this->_hitPoint += amount;
	std::cout << " repair it self " << amount << '\n';
}
