/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:27:49 by besalort          #+#    #+#             */
/*   Updated: 2024/04/18 21:29:32 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "utils.hpp"

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {
	
	private:

		std::string firstName;
		std::string lastName;
		std::string nickname;
		long int	phoneNumber;
		std::string darkestSecret;

	public:
	
		Contact(void);
		~Contact(void);
		
		int		checkPhone(std::string str);
		int		isInput(std::string str);
		void	printContact();
		void	printList(std::string str);
		void	search();
		void	setFirstName();
		void	setLastName();
		void	setNickname();
		void	setPhoneNumber();
		void	setDarkestSecret();
};

#endif
