/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:50:56 by skrasniq          #+#    #+#             */
/*   Updated: 2023/11/20 15:10:17 by skrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int	i = 0;
	Zombie	*zombie = zombieHorde(10, "LA HORDE");

	while (i != 10)
	{
		zombie[i].announce();
		i++;
	}
	delete[] zombie;
	return (0);
}
