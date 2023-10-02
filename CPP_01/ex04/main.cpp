/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylian <kylian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:54:15 by kylian            #+#    #+#             */
/*   Updated: 2023/08/27 17:48:46 by kylian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int copyAndReplace(const std::string& name, const std::string& s1, const std::string& s2)
{
	std::string line;
	std::size_t found;
	
	std::ifstream inputFile(name);
	if (!inputFile)
	{
		std::cerr << "Unable to open input file named: " << name << '\n';
		return 1;
	}
	std::ofstream outputFile(name + ".replace");
	if (!outputFile.is_open())
	{
		std::cerr << "Unable to create output file named: " << name << ".replace" << '\n';
		return 1;
	}
	while (std::getline(inputFile, line))
	{
		found = 0;
		while ((found = line.find(s1, found)) != std::string::npos)
		{
			for(int i = 0; i < found; i++)
				outputFile << line[i];
			outputFile << s2 ;
			found += s1.size();
		}
		found = line.rfind(s1);
		if (found == std::string::npos)
			outputFile << line.substr() << '\n';
		else
		{
			for (int i = found + s1.size(); line[i]; i++)
				outputFile << line[i];
			outputFile << '\n';
		}
	}
	inputFile.close();
	outputFile.close();
	return (0);
}

int main (int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "The number of arguments is wrong\n";
		return 1;
	}
	return copyAndReplace(argv[1], argv[2], argv[3]);
}