/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:28:27 by kylian            #+#    #+#             */
/*   Updated: 2023/08/27 11:30:28 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	Zombie *hordeZombie;

	hordeZombie = new Zombie[N];
	for (int i = 0; i < N; i++)
		hordeZombie[i].setName(name);
	return hordeZombie;
}