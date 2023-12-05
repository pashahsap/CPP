/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:52:11 by skrasniq          #+#    #+#             */
/*   Updated: 2023/11/22 16:36:59 by skrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name_b(name), weapon_b(NULL)
{}

HumanB::~HumanB()
{}

void	HumanB::setWeapon(Weapon &weapon)
{
	weapon_b = &weapon;
}

void	HumanB::attack() const
{
	if (weapon_b)
		std::cout << name_b << " attacks with their " << weapon_b->get_Type() << std::endl;
	else
		std::cout << name_b << " attacks with their " << std::endl;
}
