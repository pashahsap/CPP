/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:32:21 by skrasniq          #+#    #+#             */
/*   Updated: 2023/09/26 15:58:30 by skrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(int argc, char **argv)
{
	if (argc != 1)
	{
		std::cout << "Too much arguments\n";
		return (0);
	}
	PhoneBook phonebook;
	Contact	N;
	std::string	choice;

	std::cout << "===MAIN MENU===\n";
	std::cout << "|    ADD      |\n";
	std::cout << "|-------------|\n";
	std::cout << "|    SEARCH   |\n";
	std::cout << "|-------------|\n";
	std::cout << "|    EXIT     |\n";
	std::cout << "|_____________|\n";
	while (1)
	{
		std::cout << "Please print your command :\n";
		std::cin >> choice;
		if (choice == "add" || choice == "Add" || choice == "ADD")
			phonebook.Add();
		else if (choice == "search" || choice == "Search" || choice == "SEARCH")
		{
			phonebook.Search();
		}
		else if (choice == "exit" || choice == "Exit" || choice == "EXIT")
		{
			std::cout << "THANK YOU FOR USING IT. SEE YOU SOON.\n";
			exit(0);
		}
		else
			std::cout << "Bad arguments.\n";
	}
}
