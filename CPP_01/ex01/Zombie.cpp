/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:47:25 by kyaubry           #+#    #+#             */
/*   Updated: 2023/08/26 16:30:39 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::give_name(std::string name){
	this->name = name;
}

void Zombie::announce(void){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}