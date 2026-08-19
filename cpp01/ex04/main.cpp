/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 14:25:53 by fgameiro          #+#    #+#             */
/*   Updated: 2026/08/19 11:44:37 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl <<
		"Usage: \t./replace <file_name> <search> <replace>" << std::endl;
		return (1);
	}

	std::string	filename = argv[1];
	std::string buffer;
	std::string s1 = argv[2];
	std::string	s2 = argv[3];
	std::size_t	pos = 0;
	std::ifstream infile(filename);
	if (s1.empty())
	{
		std::cout << "Search string cannot be empty." << std::endl;
		return (1);
	}
	if (!infile)
	{
		std::cout << "Error: could not open input file." << std::endl;
		return (1);
	}
	std::ofstream outfile(filename + ".replace");
	if (!outfile)
	{
		std::cout << "Error: could not create output file." << std::endl;
		return (1);
	}
	while(getline (infile, buffer, '\0'))
	{
		while ((pos = buffer.find(s1, pos)) != std::string::npos)
		{
			buffer.erase(pos, s1.length());
			buffer.insert(pos, s2);
			pos += s2.length();
		}
		outfile << buffer;
	}
	infile.close();
	outfile.close();
}
