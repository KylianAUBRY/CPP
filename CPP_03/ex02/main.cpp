/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:28:07 by kyaubry           #+#    #+#             */
/*   Updated: 2023/09/20 15:46:01 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ScavTrap clap1("donovan");

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
	clap1.guardGate();


	FragTrap clap2("donovan");

	clap2.attack("maxime");
	clap2.setAttackDamage(3);
	clap2.attack("maxime");
	
	std::cout << '\n' << "hit point = " << clap2.getHitPoint() << '\n';
	clap2.takeDamage(2);
	std::cout << "hit point = " << clap2.getHitPoint() << '\n';
	
	clap2.beRepaired(5);
	std::cout << "hit point = " << clap2.getHitPoint() << "\n\n";
	
	clap2.takeDamage(13);
	std::cout << "hit point = " << clap2.getHitPoint() << "\n\n";
	
	clap2.attack("maxime");
	clap2.beRepaired(5);
	clap2.takeDamage(13);
	clap2.highFivesGuys();
	return 0;
}
