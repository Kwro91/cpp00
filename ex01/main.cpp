/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:33:39 by besalort          #+#    #+#             */
/*   Updated: 2024/07/18 15:37:16 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

int	main()
{
	Contact		nouveau;
	PhoneBook	book;
	std::string line;

	std::cout << "\033[1;33mInput a command: \033[0m";
	while (getline(std::cin, line))
	{
		if (line == "EXIT")
			return (0);
		else if (line == "ADD")
			book.add();
		else if (line == "SEARCH")
			book.search();
		else
			std::cout << "\033[1;31mWrong input\033[0m" << ", please use ADD, SEARCH, or EXIT" << std::endl;
		std::cout << "\033[1;33mInput a command: \033[0m";
	}
	return (0);
}
