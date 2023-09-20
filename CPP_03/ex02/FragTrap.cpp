/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:24:37 by kyaubry           #+#    #+#             */
/*   Updated: 2023/09/20 15:39:34 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap constructor called" << '\n';
	this->_name = "default name FragTrap";
	this->_hitPoint = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor name called" << '\n';
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const ClapTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap copy operator called" << '\n';
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << '\n';
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap : Give me high fives!!!!" << '\n';
}