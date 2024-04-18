/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:33:39 by besalort          #+#    #+#             */
/*   Updated: 2024/04/18 15:48:25 by besalort         ###   ########.fr       */
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
		std::cout << "\033[1;34mInput a command: \033[0m";
		std::cin >> line;
		if (line == "EXIT")
			break;
		if (line == "ADD")
			book.add();
		if (line == "SEARCH")
			book.search();
	}
	return (0);
}
