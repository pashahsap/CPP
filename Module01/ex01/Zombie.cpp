/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:39:39 by skrasniq          #+#    #+#             */
/*   Updated: 2023/11/20 15:21:01 by skrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(std::string name)
{
	nameH = name;
}

Zombie::~Zombie()
{
	std::cout << nameH << ": DEAD\n";
}

void	Zombie::announce(void)
{
	std::cout << nameH << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::name(std::string name)
{
	nameH = name;
}
