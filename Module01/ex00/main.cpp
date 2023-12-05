/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:50:56 by skrasniq          #+#    #+#             */
/*   Updated: 2023/10/30 15:53:59 by skrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie zombit = Zombie("test1");
	zombit.announce();
	Zombie *zombie = newZombie("test2");
	zombie->announce();
	randomChump("test3");
	delete zombie;
	return (0);
}
