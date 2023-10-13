/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:54:22 by kyaubry           #+#    #+#             */
/*   Updated: 2023/10/13 12:25:16 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cerr << "Error \nThe number of arguments is not good." << '\n';
		return 1;
	}
	std::ifstream f("data.csv"); if (!f.is_open()) {
		std::cerr << "Unable to open data.csv file." << '\n';
		return 1;
	}
	std::ifstream file(argv[1]) ; if (!file.is_open()) {
		std::cerr << "Unable to open " << argv[1] << " file." << '\n';
		return 1;
	}
	bitExchange(argv[1]);
	return 0;
}