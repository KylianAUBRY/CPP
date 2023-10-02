/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:01:17 by kylian            #+#    #+#             */
/*   Updated: 2023/08/27 12:50:19 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA{
	private :
		Weapon &_weapon;
		std::string _name;
	public :
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack();
};

#endif