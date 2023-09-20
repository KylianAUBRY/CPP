/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:28:07 by kyaubry           #+#    #+#             */
/*   Updated: 2023/09/20 11:08:47 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap1("donovan");
	clap1.attack("maxime");
	clap1.setAttackDamage(3);
	clap1.attack("maxime");
	
	std::cout << '\n' << "hit point = " << clap1.getHitPoint() << '\n';
	clap1.takeDamage(2);
	std::cout << "hit point = " << clap1.getHitPoint() << '\n';
	
	clap1.beRepaired(5);
	std::cout << "hit point = " << clap1.getHitPoint() << "\n\n";
	
	clap1.takeDamage(13);
	std::cout << "hit point = " << clap1.getHitPoint() << "\n\n";
	
	clap1.attack("maxime");
	clap1.beRepaired(5);
	clap1.takeDamage(13);
	return 0;
}
