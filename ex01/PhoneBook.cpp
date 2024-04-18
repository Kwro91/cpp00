/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:26:58 by besalort          #+#    #+#             */
/*   Updated: 2024/04/18 15:39:57 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void):i(0) {
	// std::cout << "On construit un book" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void) {
	// std::cout << "On detruit un book" << std::endl;
	return ;
}

int		PhoneBook::checkContact(std::string str) {
	int	nb = -1;

	if (isDigit(str) != 1)
		return (0);
	nb = std::stoi(str);
	if (nb > this->i%8)
		return (0);
	this->instance[nb - 1].printContact();
	return (1);
}

void	PhoneBook::add() {
	int	j = 0;

	j = i%8;
	// if (this->i == 8)
	// 	this->i = 0;
	this->instance[j].setFirstName();
	this->instance[j].setLastName();
	this->instance[j].setNickname();
	this->instance[j].setPhoneNumber();
	this->instance[j].setDarkestSecret();
	this->i++;
	return ;
}

void	PhoneBook::search(void) {
	int	j = 0;
	std::string str;

	std::cout << "List: |   Index   |   First    |   Last     | Nickname   " << std::endl;
	while (j < i && j < 8)
	{
		std::cout << "      |     " << (j + 1) << "     | ";
		this->instance[j].search();
		j++;
	}
	std::cout << std::endl;
	if (i == 0)
		return ;
	std::cout << "Chose a contact: ";
	std::cin >> str;
	while (checkContact(str) != 1)
	{
		std::cout << std::endl;
		std::cout << "Wrong input, chose a contact: ";
		std::cin >> str;
	}
	std::cout << std::endl;
}
