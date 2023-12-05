/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:13:02 by skrasniq          #+#    #+#             */
/*   Updated: 2023/11/22 16:33:06 by skrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
	private:

	std::string	_type;

	public:

	Weapon(std::string type);
	~Weapon();
	std::string	get_Type() const;
	void	setType(std::string type);
};
#endif
