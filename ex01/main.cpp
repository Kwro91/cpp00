/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:33:39 by besalort          #+#    #+#             */
/*   Updated: 2024/04/18 21:07:45 by besalort         ###   ########.fr       */
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

	while (1)
	{
		std::cout << "\033[1;33mInput a command: \033[0m";
		std::cin >> line;
		if (line == "EXIT")
			break;
		else if (line == "ADD")
			book.add();
		else if (line == "SEARCH")
			book.search();
		else
			std::cout << "\033[1;31mWrong input\033[0m" << ", please use ADD, SEARCH, or EXIT" << std::endl;
	}
	return (0);
}
