/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:40:04 by skrasniq          #+#    #+#             */
/*   Updated: 2023/10/30 15:31:39 by skrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie
{
	private:

	std::string	name;

	public:

	Zombie(std::string name);
	~Zombie(void);
	void		announce(void);
};

Zombie*		newZombie(std::string name);
void		randomChump(std::string name);

#endif
