/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:00:16 by kyaubry           #+#    #+#             */
/*   Updated: 2023/08/26 16:11:00 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie_heap;

	zombie_heap = newZombie("heap_zombie");
	zombie_heap->announce();
	delete zombie_heap;
	randomChump("stack_zombie");
}