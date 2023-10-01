/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:38:12 by skrasniq          #+#    #+#             */
/*   Updated: 2023/09/22 15:42:22 by skrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

class	PhoneBook
{
	private:

	Contact	N[8];
	int		_index;
	int		_size;

	public:

	void	Add();
	void	Search();
	PhoneBook();
};
