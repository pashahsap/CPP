/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:46:44 by skrasniq          #+#    #+#             */
/*   Updated: 2023/11/20 15:08:12 by skrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int	i = 0;
	Zombie *tab = new Zombie[N];

	while (i != N)
	{
		tab[i].name(name);
		i++;
	}
	return (tab);
}
