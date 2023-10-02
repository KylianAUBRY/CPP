/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:47:37 by kylian            #+#    #+#             */
/*   Updated: 2023/08/27 12:28:50 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon{
	private :
		std::string type;
	public :
		Weapon(std::string type_name);
		~Weapon();
		const std::string& getType(void);
		void setType(std::string value_for_type);
};

#endif