/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:46:27 by skrasniq          #+#    #+#             */
/*   Updated: 2023/11/27 15:30:13 by skrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

int	main(int ac, char **av)
{
	char	str[100];

	size_t	pos;

	if (ac != 4)
	{
		std::cout << "Error argument : ./file file_path string1 string2" << std::endl;
		exit(1);
	}


	std::string	_file;
	std::string	i = av[2];
	std::string	j = av[3];
	std::ifstream	input_file(av[1]);
	
	if (i.length() == 0 || j.length() == 0)
	{
		std::cout << "Error: empty string" << std::endl;
		return (0);
	}
	if (!input_file)
	{
		std::cout << "Error: file not found" << std::endl;
		return (0);
	}
	strcpy(str, av[1]);

	char	*replace = strcat(str, ".replace");
	std::ofstream	tfile(replace, std::ios::binary);

	while (getline(input_file, _file))
	{
		pos = _file.find(i);
		while (pos != std::string::npos)
		{
			_file.erase(pos, i.length());
			_file.insert(pos, j);
			pos = _file.find(i);
		}
		tfile << _file << std::endl;
	}
}
