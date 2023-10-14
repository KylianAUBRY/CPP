/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 10:56:22 by kylian            #+#    #+#             */
/*   Updated: 2023/10/14 12:01:06 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

bool	isOverflow(std::string const &str)
{
	try {
        int num = std::stoi(str);
        return num <= std::numeric_limits<int>::max();
    } catch (const std::out_of_range&) {
        return false;
    }
}

bool checkArg(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j]; j++)
		{
			if (std::isdigit(argv[i][j]) == false)
				return false;
		}
		if (isOverflow(argv[i]) == false)
			return false;
	}
	return true;
}

int main(int argc, char **argv)
{
	if (argc <= 1){
		std::cerr << "Error : enter a list of integers." << '\n';
		return 1;
	}
	if (checkArg(argc, argv) == false){
		std::cerr << "Error : the number must be positive and fit into an int, it must not contain any other character." << '\n';
		return 1;
	}
	sortAffi(argc, argv);
}