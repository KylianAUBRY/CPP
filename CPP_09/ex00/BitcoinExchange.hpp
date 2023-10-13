/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:54:24 by kyaubry           #+#    #+#             */
/*   Updated: 2023/10/13 15:03:04 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <fstream>
# include <sstream>
# include <map>

class BitExchange {
	private:
		std::map<std::string, double> _data;

	public:
		BitExchange();
		~BitExchange();
		BitExchange(BitExchange const &other);
		BitExchange	&operator=(BitExchange const &other);

		std::map<std::string, double> getData() const;
		double	findValue(std::string const &date, double value);
};


void	bitExchange(std::string const &file);