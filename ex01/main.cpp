/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:33:39 by besalort          #+#    #+#             */
/*   Updated: 2024/03/29 14:56:47 by besalort         ###   ########.fr       */
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
	// int			i;

	// i = 0;
	// (void)nouveau;
	// nouveau.search();
	while (1)
	{
		std::cout << "Entrez une commande" << std::endl;
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
