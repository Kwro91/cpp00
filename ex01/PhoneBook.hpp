/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:27:52 by besalort          #+#    #+#             */
/*   Updated: 2024/03/29 14:55:42 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Contact.hpp"

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class	PhoneBook {
	private:
	
		Contact	instance[8];
		int		i;

	public:
		PhoneBook(void);
		~PhoneBook(void);
		
		void	add();
		void	search(void);
};

#endif
