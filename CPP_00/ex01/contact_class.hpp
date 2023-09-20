/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:04:47 by kyaubry           #+#    #+#             */
/*   Updated: 2023/08/26 12:57:31 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASSE_HPP
# define CONTACT_CLASSE_HPP

#include <iostream>
#include <string>

class Contact {
	private :
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;
	public :
		void	setFisrtName(std::string const firstName);
		void	setLastName(std::string const lastName);
		void	setNickName(std::string const nickName);
		void	setPhoneNumber(std::string const phoneNumber);
		void	setDarkestSecret(std::string const darkestSecret);
		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getPhoneNumber();
		std::string getDarkesSecret();
};

#endif