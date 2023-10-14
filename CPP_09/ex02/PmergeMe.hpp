/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 10:56:27 by kylian            #+#    #+#             */
/*   Updated: 2023/10/14 12:50:24 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>
# include <fstream>
# include <sstream>
# include <limits>
# include <list>
# include <vector>

class PmergeMe
{
	private :
		std::vector<int>	_vector;
		std::list<int>		_list;
		PmergeMe();
	public :
		PmergeMe(int argc, char **argv);
		~PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);

		std::list<int> getList() const;
		std::vector<int> getVector() const;

		std::list<int> mergeList(std::list<int> &left, std::list<int> &right);
		std::list<int> mergeInsertList(std::list<int> &list);
		
		std::vector<int> mergeInsertVector(std::vector<int> &vector);
		std::vector<int> mergeVector(std::vector<int> &left, std::vector<int> &right);

		void printList();
		void printVector();
};

void sortAffi(int argc, char **argv);