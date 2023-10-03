/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:24:11 by kylian            #+#    #+#             */
/*   Updated: 2023/10/03 14:27:00 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

template <typename T, typename S, typename F>
void iter(T tab[], S size, F funct)
{
	for (S i = 0; i < size; i++)
		funct(tab[i]);
}
