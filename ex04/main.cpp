/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:36:25 by ntalmon           #+#    #+#             */
/*   Updated: 2024/07/16 15:51:40 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream inFile(filename);
	if (!inFile)
	{
		std::cerr << "Unable to open file: " << filename << std::endl;
		return (1);
	}
	std::ofstream outFile(filename + ".replace");
	if (!outFile)
	{
		std::cerr << "Unable to create output file: " << filename + ".replace" << std::endl;
		return (1);
	}
	std::string line;
	while (std::getline(inFile, line))
	{
		int start_pos = 0;
		int pos = 0;
		std::string n_pos;
		while ((pos = line.find(s1, start_pos)) != std::string::npos)
		{
			outFile << line.substr(start_pos, pos - start_pos);
			outFile << s2,
			start_pos= pos + s1.length();
		}
		outFile << line.substr(start_pos) << std::endl;
	}
	outFile.close();
	outFile.close();
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		replace(filename, s1, s2);
	}
	else
	{
		std::cerr << "Program should be used like: " << argv[0] << " <filename> <s1> <s2> \n";
		return (1);
	}
	return (0);
}
