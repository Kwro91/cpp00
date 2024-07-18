/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:08:15 by besalort          #+#    #+#             */
/*   Updated: 2024/07/16 16:14:52 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	int	i;
	size_t	j;
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
			while (j < str.length())
			{
				str[j] = toupper(str[j]);
				j++;
			}
			std::cout << str;
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}