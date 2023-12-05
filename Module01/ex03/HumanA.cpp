/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:28:04 by skrasniq          #+#    #+#             */
/*   Updated: 2023/11/22 16:46:43 by skrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name_a(name), weapon_a(weapon)
{}

HumanA::~HumanA()
{}

void	HumanA::attack() const
{
	std::cout << name_a << " attacks with their " << weapon_a.get_Type() << std::endl;
}
