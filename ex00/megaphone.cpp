/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:08:15 by besalort          #+#    #+#             */
/*   Updated: 2024/03/28 16:51:04 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <string>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	len;
	std::string str;

	i = 1;
	if (ac ==1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (ac >= 2)
	{
		while (i < ac)
		{
			j = 0;
			str = av[i];
			len = str.length();
			while (j < len)
			{
				str[j] = toupper(str[j]);
				std::cout << str[j];
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}