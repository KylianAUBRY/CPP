/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:17:31 by kyaubry           #+#    #+#             */
/*   Updated: 2023/08/26 16:31:27 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	if (N <= 0)
		return (NULL);	
	Zombie *horde_zombie;

	horde_zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde_zombie[i].give_name(name);
	return horde_zombie;
}