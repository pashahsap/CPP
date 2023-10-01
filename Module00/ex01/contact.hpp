/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:08:34 by skrasniq          #+#    #+#             */
/*   Updated: 2023/09/25 16:15:20 by skrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include <iomanip>

class	Contact
{
	private:
		
	std::string	f_name;
	std::string	l_name;
	std::string	nickname;
	std::string	secret;
	std::string	phone_nb;

	public:

	std::string	getPhone_Nb();
	std::string	getF_Name();
	std::string	getL_Name();
	std::string	getNickname();
	std::string	getSecret();

	void		setPhone_Nb(std::string);
	void		setF_Name(std::string);
	void		setL_Name(std::string);
	void		setNickname(std::string);
	void		setSecret(std::string);
};
