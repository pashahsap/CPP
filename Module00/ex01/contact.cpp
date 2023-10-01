/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:33:21 by skrasniq          #+#    #+#             */
/*   Updated: 2023/09/22 15:37:51 by skrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string Contact::getPhone_Nb()
{
	return (phone_nb);
}

std::string	Contact::getF_Name()
{
	return (f_name);
}

std::string	Contact::getL_Name()
{
	return (l_name);
}

std::string	Contact::getNickname()
{
	return (nickname);
}

std::string Contact::getSecret()
{
	return (secret);
}

void	Contact::setPhone_Nb(std::string Phone_Nb)
{
	phone_nb = Phone_Nb;
}

void	Contact::setF_Name(std::string F_Name)
{
	f_name = F_Name;
}

void	Contact::setL_Name(std::string L_Name)
{
	l_name = L_Name;
}

void	Contact::setNickname(std::string Nickname)
{
	nickname = Nickname;
}

void	Contact::setSecret(std::string	Secret)
{
	secret = Secret;
}
