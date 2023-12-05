/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:03:13 by skrasniq          #+#    #+#             */
/*   Updated: 2023/11/24 17:06:28 by skrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class	Harl
{
	public:

	void	complain(std::string level);

	private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};
#endif
