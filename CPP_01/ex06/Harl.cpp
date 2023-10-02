/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:06:25 by kylian            #+#    #+#             */
/*   Updated: 2023/08/27 18:45:59 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug (void){
	std::cout << "the debug messages, message that I will never see as there is never anything debug in my code... everything is perfect.\n";
}

void Harl::info (void){
	std::cout << "INFO, info... useless message\n";
}

void Harl::warning(void){
	std::cout << "WARNING, there is a problem, but don't worry, I manage\n";
}

void Harl::error(void){
	std::cout << "ERROR, maybe I should have listened to the other messages\n";
}

void Harl::complain(std::string level){
	std::string code[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void (Harl::*funct[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int lvl = -1;
	for (int i = 0; i < 4; i++)
	{
		if (code[i] == level)
			lvl = i;
	}
	
	switch (lvl)
	{
		case (0):
			for(int i = lvl; i < 4; i++)
				(this->*funct[i])();
			break;
		case (1):
			for(int i = lvl; i < 4; i++)
				(this->*funct[i])();
			break;
		case (2):
			for(int i = lvl; i < 4; i++)
				(this->*funct[i])();
			break;
		case (3):
			for(int i = lvl; i < 4; i++)
				(this->*funct[i])();
			break;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}

/*
instead of the switch case we could have implemented a for and a if as below
if (lvl < 0)
	std::cout << "[ Probably complaining about insignificant problems ]\n";
else
	for(lvl; lvl < 4; lvl++)
		(this->*funct[lvl])();
but to please the subject we made the switches
*/