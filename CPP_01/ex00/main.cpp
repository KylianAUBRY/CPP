/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:06:25 by kylian            #+#    #+#             */
/*   Updated: 2023/08/27 11:20:28 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie_heap;
	randomChump("stack_zombie");
	
	zombie_heap = newZombie("heap_zombie");
	zombie_heap->announce();
	delete zombie_heap;
}