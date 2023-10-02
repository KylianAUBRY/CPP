/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:30:31 by kylian            #+#    #+#             */
/*   Updated: 2023/08/27 11:33:22 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int nb_Zombie = 10;
	Zombie *hordeZombie;

	hordeZombie = zombieHorde(nb_Zombie ,"Horde");
	for (int i = 0; i < nb_Zombie; i++)
		hordeZombie[i].announce();
	delete[] hordeZombie;
	return 0;
}