/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:26:55 by besalort          #+#    #+#             */
/*   Updated: 2024/04/26 17:34:15 by besalort         ###   ########.fr       */
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

int		Contact::checkPhone(std::string str) {
	long int	nb;
	if (isDigit(str) != 1)
		return (0);
	nb = std::stol(str);
	if (nb < 0 || nb > 2147483647)
		return (0);
	return (1);
}

void	Contact::printContact() {
	std::cout << "First Name: " << this->firstName << std::endl;
	std::cout << "Last Name: " << this->lastName << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone Number: " << "0" << this->phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << this->darkestSecret << std::endl;
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

int	Contact::isInput(std::string str) {
	if (str[0] == '\0' || str[0] == '\n')
		return (0);
	return (1);
}

void	Contact::search() {
	printList(this->firstName);
	std::cout << " | ";
	printList(this->lastName);
	std::cout << " | ";
	printList(this->nickname);
	std::cout << std::endl;
}

void	Contact::setFirstName() {
	std::string	str;

	std::cout << "First Name: ";
	getline(std::cin, str);
	while (isInput(str) != 1) 
	{
		std::cout << std::endl;
		std::cout << "\033[1;31mWrong input\033[0m" << ", first name: ";
		getline(std::cin, str);
	}
	std::cout << std::endl;
	this->firstName = str;
}

void	Contact::setLastName() {
	std::string	str;

	std::cout << "Last Name: ";
	getline(std::cin, str);
	while (isInput(str) != 1) 
	{
		std::cout << std::endl;
		std::cout << "\033[1;31mWrong input\033[0m" << ", last name: ";
		getline(std::cin, str);
	}
	std::cout << std::endl;
	this->lastName = str;
}

void	Contact::setNickname() {
	std::string	str;

	std::cout << "Nickname: ";
	getline(std::cin, str);;
	while (isInput(str) != 1) 
	{
		std::cout << std::endl;
		std::cout << "\033[1;31mWrong input\033[0m" << ", nickname: ";
		getline(std::cin, str);;
	}
	std::cout << std::endl;
	this->nickname = str;
}

void	Contact::setPhoneNumber() {
	long int		nb;
	std::string		str;
	
	std::cout << "Phone number: ";
	getline(std::cin, str);;
	while (checkPhone(str) != 1)
	{
		std::cout << std::endl;
		std::cout << "\033[1;31mWrong input\033[0m" << ", phone number: ";
		getline(std::cin, str);;
	}
	std::cout << std::endl;
	nb = stol(str);
	this->phoneNumber = nb;
}

void	Contact::setDarkestSecret() {
	std::string	str;

	std::cout << "Darkest Secret: ";
	getline(std::cin, str);;
	while (isInput(str) != 1) 
	{
		std::cout << std::endl;
		std::cout << "\033[1;31mWrong input\033[0m" << ", darkest secret: ";
		getline(std::cin, str);;
	}
	std::cout << std::endl;
	this->darkestSecret = str;
}
