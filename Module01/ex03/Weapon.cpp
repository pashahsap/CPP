/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:53:58 by skrasniq          #+#    #+#             */
/*   Updated: 2023/11/22 16:33:09 by skrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{}

Weapon::~Weapon()
{}

std::string	Weapon::get_Type() const
{
	return _type;
}

void	Weapon::setType(std::string type)
{
	_type = type;
}
