/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:47:21 by kyaubry           #+#    #+#             */
/*   Updated: 2023/08/26 15:17:08 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private :
		std::string name;
	public :
		void announce(void);
		Zombie(std::string name);
		~Zombie();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
