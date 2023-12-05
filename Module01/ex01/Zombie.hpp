/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:40:04 by skrasniq          #+#    #+#             */
/*   Updated: 2023/11/20 15:20:27 by skrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie
{
	private:

	std::string	nameH;

	public:

	Zombie();
	Zombie(std::string name);
		~Zombie();
	void		announce(void);
	void		name(std::string name);
};

Zombie*		zombieHorde(int N, std::string name);

#endif
