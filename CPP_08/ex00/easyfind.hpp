/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyaubry <kyaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:06:36 by kyaubry           #+#    #+#             */
/*   Updated: 2023/10/09 13:40:05 by kyaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <vector>
# include <list>
# include <algorithm>

template <class T> int easyfind(T container, int chr)
{
	if (std::find(container.begin(), container.end(), chr) != container.end())
	{
		std::cout << '\''<< chr << "\' was found in the container." << '\n';
		return 0;
	}
	std::cout << "impossible to find \'" << chr << "\' in the container." << '\n';
	return 1;
};