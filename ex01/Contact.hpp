/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:27:49 by besalort          #+#    #+#             */
/*   Updated: 2024/03/29 17:03:36 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {
	
	private:

		std::string firstName;
		std::string lastName;
		std::string nickname;
		int			phoneNumber;
		std::string darkestSecret;

	public:
	
		Contact(void);
		~Contact(void);
		
		void	printList(std::string str);
		void	search(void);
		void	setFirstName();
		void	setLastName();
		void	setNickname();
		void	setPhoneNumber();
		void	setDarkestSecret();
};

#endif
