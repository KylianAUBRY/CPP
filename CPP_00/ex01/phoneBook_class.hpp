/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:59:42 by kyaubry           #+#    #+#             */
/*   Updated: 2023/08/26 12:04:10 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASSE_HPP
# define PHONEBOOK_CLASSE_HPP

#include "contact_class.hpp"

class PhoneBook {
	private:
		Contact rep[8];
	public:
		void func_add(int j);
		void func_search(int j);
};

#endif