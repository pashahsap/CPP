/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:28:50 by skrasniq          #+#    #+#             */
/*   Updated: 2023/11/22 16:46:42 by skrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class	HumanA
{
	private:

	std::string	name_a;
	Weapon	&weapon_a;

	public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void	attack() const;
};
#endif
