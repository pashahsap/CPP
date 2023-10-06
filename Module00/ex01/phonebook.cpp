/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:14:20 by skrasniq          #+#    #+#             */
/*   Updated: 2023/09/29 16:58:07 by skrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	_index = 0;
	_size = 0;
}

void	PhoneBook::Add()
{
	if (_index == 8)
	{
		_index = 0;
		_size = _size + 1;
	}
	std::string	answer;

	std::cout << "What's the phone's number ?\n";
	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::getline(std::cin, answer);
	if (std::cin.eof())
		exit(0);
	while (answer == "\0")
	{
		std::cout << "Please insert the phone's number:\n";
		std::getline(std::cin, answer);
	}
	N[_index].setPhone_Nb(answer);
	std::cout << "What's the first name ?\n";
	std::getline(std::cin, answer);
	if (std::cin.eof())
		exit(0);
	while (answer == "\0")
	{
		std::cout << "Please insert the first name:\n";
		std::getline(std::cin, answer);
	}
	N[_index].setF_Name(answer);
	std::cout << "What's the last name ?\n";
	std::getline(std::cin, answer);
	if (std::cin.eof())
		exit(0);
	while (answer == "\0")
	{
		std::cout << "Please insert the last name:\n";
		std::getline(std::cin, answer);
	}
	N[_index].setL_Name(answer);
	std::cout << "What's the nickname ?\n";
	std::getline(std::cin, answer);
	if (std::cin.eof())
		exit(0);
	while (answer == "\0")
	{
		std::cout << "Please insert the nickname:\n";
		std::getline(std::cin, answer);
	}
	N[_index].setNickname(answer);
	std::cout << "What's the darkest secret ?\n";
	std::getline(std::cin, answer);
	if (std::cin.eof())
		exit(0);
	while (answer == "\0")
	{
		std::cout << "Please insert the darkest secret:\n";
		std::getline(std::cin, answer);
	}
	N[_index].setSecret(answer);
	_index = _index + 1;
}

int	check_index(std::string index)
{
	if (index == "1" || index == "2" || index == "3" || index == "4"
		|| index == "5" || index == "6" || index == "7"
			|| index == "8")
		return (stoi(index));
	else
		return (42);
}

void	PhoneBook::Search()
{
	int		i;

	i = 0;
	if (_index == 0 && _size == 0)
		std::cout << "ERROR: THERE IS NO CONTACT TO SEARCH.\n";
	else
	{
		std::cout << "*-----*----------*----------*----------*\n";
		std::cout << "|index|First Name|Last Name |Nickname  |\n";
		std::cout << "*-----*----------*----------*----------*\n";
		if (_index < 8 && _size == 0)
		{
			while (i < _index)
			{
				std::cout << "| " << i+1 << "   |";
				if (N[i].getF_Name().length() < 11)
					std::cout << N[i].getF_Name() << std::setw(11 - N[i].getF_Name().length()) << "|";
				else
					std::cout << N[i].getF_Name().substr(0, 9) << ".|";
				if (N[i].getL_Name().length() < 11)
					std::cout << N[i].getL_Name() << std::setw(11 - N[i].getL_Name().length()) << "|";
				else
					std::cout << N[i].getL_Name().substr(0, 9) << ".|";
				if (N[i].getNickname().length() < 11)
					std::cout << N[i].getNickname() << std::setw(11 - N[i].getNickname().length()) << "|";
				else
					std::cout << N[i].getNickname().substr(0, 9) << ".|";
				std::cout << std::endl;
				std::cout << "*-----*----------*----------*----------*\n";
				i++;
			}
		}
		else if (_index == 8 || _size > 0)
		{
			while (i < 8)
			{
				std::cout << "| " << i+1 << "   |";
				if (N[i].getF_Name().length() < 11)
					std::cout << N[i].getF_Name() << std::setw(11 - N[i].getF_Name().length()) << "|";
				else
					std::cout << N[i].getF_Name().substr(0, 9) << ".|";
				if (N[i].getL_Name().length() < 11)
					std::cout << N[i].getL_Name() << std::setw(11 - N[i].getL_Name().length()) << "|";
				else
					std::cout << N[i].getL_Name().substr(0, 9) << ".|";
				if (N[i].getNickname().length() < 11)
					std::cout << N[i].getNickname() << std::setw(11 - N[i].getNickname().length()) << "|";
				else
					std::cout << N[i].getNickname().substr(0, 9) << ".|";
				std::cout << std::endl;
				std::cout << "*-----*----------*----------*----------*\n";
				i++;
			}
		}
		//std::cin.ignore();
		while (1)
		{
			std::cout << "Please insert the index of the contact you are looking for :\n";
			std::string	input;
			std::getline(std::cin, input);
			if (std::cin.eof())
				return (0);
			int	number = check_index(input);
			if (_index < 8 && _size == 0)
			{
				if (number <= _index)
				{
					std::cout << N[number-1].getF_Name() << " " << N[number-1].getL_Name();
					std::cout << " " << N[number-1].getNickname() << " " << N[number-1].getPhone_Nb();
					std::cout << " " << N[number-1].getSecret() << "\n";
					break ;
				}
				else
					std::cout << "ERROR: INVALID INDEX\n";
			}
			else if (_index == 8 || _size > 0)
			{
				if (number < 9)
				{
					std::cout << N[number-1].getF_Name() << " " << N[number-1].getL_Name();
                                        std::cout << " " << N[number-1].getNickname() << " " << N[number-1].getPhone_Nb();
                                        std::cout << " " << N[number-1].getSecret() << "\n";
                                        break ;
				}
				else
					std::cout << "ERROR: INVALID INDEX\n";
			}
		}

	}
}
