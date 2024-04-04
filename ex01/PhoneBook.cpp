/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:26:58 by besalort          #+#    #+#             */
/*   Updated: 2024/03/29 20:47:58 by besalort         ###   ########.fr       */
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

	std::cout << "List: |   Index   |   First    |   Last     | Nickname   " << std::endl;
	while (j < i && j < 8)
	{
		std::cout << "      |     " << (j + 1) << "     | ";
		this->instance[j].search();
		j++;
	}
}
