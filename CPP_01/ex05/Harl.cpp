/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:06:25 by kylian            #+#    #+#             */
/*   Updated: 2023/08/27 18:21:11 by kylian           ###   ########.fr       */
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
	for (int i = 0; i < 4; i++)
	{
		if (code[i] == level)
			(this->*funct[i])();
	}
}