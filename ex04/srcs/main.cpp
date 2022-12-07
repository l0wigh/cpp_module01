/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomathi <thomathi@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:51:44 by thomathi          #+#    #+#             */
/*   Updated: 2022/12/07 15:05:27 by thomathi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string sedpp(std::string buffer, std::string s1, std::string s2)
{
	std::string s;
	std::string::size_type e;
	std::string::size_type x;

	e = 0;
	while (e < buffer.length())
	{
		x = 0;
		while (x < s1.length())
		{
			if (buffer[e + x] != s1[x])
				break;
			x++;
		}
		if (x == s1.length())
		{
			s.append(s2);
			e += s1.length();
		}
		else
			s.append(1, buffer[e++]);
	}
	return s;
}

int main(int argc, char **argv)
{
	std::fstream inf;
	std::ofstream outf;
	std::string buffer;

	if (argc != 4)
	{
		std::cout << "Usage : sedpp <filename> <string1> <string2>" << std::endl;
		return 1;
	}
	inf.open(argv[1], std::ios::in);
	if (!inf)
	{
		std::cout << "Fichier non trouvé " << std::endl;
		return 2;
	}
	outf.open(std::string(argv[1]).append(".replace"), std::ios::out | std::ios::trunc);
	if (!outf)
	{
		std::cout << "Fichier impossible à ouvrir/créer" << std::endl;
		return 2;
	}
	std::getline(inf, buffer, '$');
	inf >> buffer;
	if (!buffer.empty())
		buffer = sedpp(buffer, std::string(argv[2]), std::string(argv[3]));
	outf << buffer;
	inf.close();
	outf.close();
	return 0;
}
