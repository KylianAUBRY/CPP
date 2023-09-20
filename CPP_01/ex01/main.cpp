/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:00:16 by kyaubry           #+#    #+#             */
/*   Updated: 2023/08/26 16:35:19 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *horde_zombie;
	int nb_zombie = 1;

	horde_zombie = zombieHorde(nb_zombie ,"jj le zombie");
	for (int i = 0; i < nb_zombie; i++)
		horde_zombie[i].announce();
	delete[] horde_zombie;
}