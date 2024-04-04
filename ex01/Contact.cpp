/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:26:55 by besalort          #+#    #+#             */
/*   Updated: 2024/04/02 19:08:28 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {
	// std::cout << "On construit Contact" << std::endl;
	this->firstName = "None";
	this->lastName = "None";
	this->nickname = "None";
	this->phoneNumber = 0;
	this->darkestSecret = "None";
	return ;
}

Contact::~Contact(void) {
	// std::cout << "On detruit Contact" << std::endl;
}

void	Contact::printList(std::string str) {
	int			i = 0;

	while (str[i] && i < 9)
	{
		std::cout << str[i];
		i++;
	}
	if (i == 9 && str.length() > 9)
		std::cout << '.';
	else
	{
		while (i < 10)
		{
			std::cout << " ";
			i++;
		}
	}
}

void	Contact::search(void) {
	printList(this->firstName);
	std::cout << " | ";
	// std::cout << this->lastName;
	printList(this->lastName);
	std::cout << " | ";
	// std::cout << this->nickname;
	printList(this->nickname);
	std::cout << std::endl;
}

void	Contact::setFirstName() {
	std::string	str;

	std::cout << "First Name: ";
	std::cin >> str;
	std::cout << std::endl;
	this->firstName = str;
}

void	Contact::setLastName() {
	std::string	str;

	std::cout << "Last Name: ";
	std::cin >> str;
	std::cout << std::endl;
	this->lastName = str;
}

void	Contact::setNickname() {
	std::string	str;

	std::cout << "Nickname: ";
	std::cin >> str;
	std::cout << std::endl;
	this->nickname = str;
}

void	Contact::setPhoneNumber() {
	double				nb;
	std::string			str;
	
	std::cout << "Phone number: ";
	while (std::getline(std::cin, str))
	{
		std::stringstream ss(str);
		if (ss >> nb)
		{
			break;
		}
		else
			std::cout << "Wrong input, try again "<< std::endl;
	}
	this->phoneNumber = nb;
}

void	Contact::setDarkestSecret() {
	std::string	str;

	std::cout << "Darkest Secret: ";
	std::cin >> str;
	std::cout << std::endl;
	this->darkestSecret = str;
}
