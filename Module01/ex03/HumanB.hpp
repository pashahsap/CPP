/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:44:31 by skrasniq          #+#    #+#             */
/*   Updated: 2023/11/22 16:36:57 by skrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class	HumanB
{
	private:

	std::string	name_b;
	Weapon	*weapon_b;

	public:

	HumanB(std::string name);
	~HumanB();
	void	setWeapon(Weapon &weapon);
	void	attack() const;
};
#endif
