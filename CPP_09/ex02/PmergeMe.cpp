/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 10:56:21 by kylian            #+#    #+#             */
/*   Updated: 2023/10/14 12:54:39 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &other) {*this = other;}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
	this->_vector = other._vector;
	this->_list = other._list;
	return *this;
}

PmergeMe::PmergeMe(int argc, char **argv)
{
	for (int i = 1; i < argc; i++){
		int tmp = atoi(argv[i]);
		this->_vector.push_back(tmp);
		this->_list.push_back(tmp);
	}
}

std::list<int> PmergeMe::getList() const {return this->_list;}
std::vector<int> PmergeMe::getVector() const {return this->_vector;}

/*---------------vector---------------*/

std::vector<int> PmergeMe::mergeVector(std::vector<int> &left, std::vector<int> &right)
{
	std::vector<int> result;
	while (!left.empty() && !right.empty())
	{
		if (left.front() <= right.front())
		{
			result.push_back(left.front());
			left.erase(left.begin());
		}
		else
		{
			result.push_back(right.front());
			right.erase(right.begin());
		}
	}
	while (!left.empty())
	{
		result.push_back(left.front());
		left.erase(left.begin());
	}
	while (!right.empty())
	{
		result.push_back(right.front());
		right.erase(right.begin());
	}
	return result;
}

std::vector<int> PmergeMe::mergeInsertVector(std::vector<int> &vector)
{
	if (vector.size() <= 1)
		return vector;
	int middle = vector.size() / 2;
	std::vector<int> left(vector.begin(), vector.begin() + middle);
	std::vector<int> right(vector.begin() + middle, vector.end());
	left = mergeInsertVector(left);
	right = mergeInsertVector(right);
	return mergeVector(left, right);
}

/*---------------list---------------*/

std::list<int> PmergeMe::mergeList(std::list<int> &left, std::list<int> &right)
{
	std::list<int> result;
	while (!left.empty() && !right.empty())
	{
		if (left.front() <= right.front())
		{
			result.push_back(left.front());
			left.erase(left.begin());
		}
		else
		{
			result.push_back(right.front());
			right.erase(right.begin());
		}
	}
	while (!left.empty())
	{
		result.push_back(left.front());
		left.erase(left.begin());
	}
	while (!right.empty())
	{
		result.push_back(right.front());
		right.erase(right.begin());
	}
	return result;
}

std::list<int> PmergeMe::mergeInsertList(std::list<int> &list)
{
	if (list.size() <= 1)
		return list;
	int mid = list.size() / 2;
	std::list<int> left;
	std::list<int> right;
	for (int i = 0; i < mid; i++)
	{
		left.push_back(list.front());
		list.pop_front();
	}
	right = list;
	left = mergeInsertList(left);
	right = mergeInsertList(right);
	return mergeList(left, right);
}

void sortAffi(int argc, char **argv)
{
	PmergeMe	merge(argc, argv);
	clock_t start, end;
	double list_time, vector_time;
	std::list<int> list = merge.getList();
	std::vector<int> vector = merge.getVector();
	
	std::cout << "Before: ";
	merge.printList();
	
	start = clock();
	list = merge.mergeInsertList(list);
	end = clock();
	list_time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;
	
	start = clock();
	vector = merge.mergeInsertVector(vector);
	end = clock();
	vector_time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;
	
	std::cout << "After: ";
	for (const int &e : list)
		std::cout << e << ' ';
	std::cout << '\n';

	std::cout << "Time to process a range of " << list.size() << " elements with std::list container: " << list_time << " us" << '\n';
	std::cout << "Time to process a range of " << vector.size() << " elements with std::vector container: " << vector_time << " us" << '\n';
}

void PmergeMe::printList()
{
	for (const int &e : this->_list)
		std::cout << e << ' ';
	std::cout << '\n';
}

void PmergeMe::printVector()
{
	for (const int &e : this->_vector)
		std::cout << e << ' ';
	std::cout << '\n';
}