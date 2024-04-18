/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:07:14 by besalort          #+#    #+#             */
/*   Updated: 2024/04/18 20:12:14 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <string>
#include <iostream>

Account::Account(void) {
	// constructeur vide
	this->_accountIndex = _nbAccounts + 1;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_nbAccounts++;
	return ;
}

Account::Account(int initialDeposit) {
	// constructeur int
	this->_accountIndex = _nbAccounts + 1;
	this->_amount = initialDeposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_nbAccounts++;
	return ;
}

Account::~Account(void) {
	// destructeur
	return ;
}

int		Account::getNbAccounts( void ) {
	return (_nbAccounts);
}

int		Account::getTotalAmount( void ) {
	int	total = 0;
	int	i = 0;
	while (i < _nbAccounts)
	{
		total += 
		i++;
	}
	return (_nbAccounts);
}

int		Account::checkAmount( void ) const {
	return (this->_amount);
}

void	Account::displayAccountsInfos(void) {
	int	i = 0;
	while(i < _nbAccounts || i < 100) //Condition 100 a ENLEVER !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	{
		std::cout << "displayAccountInfos" << std::endl;
		// std::cout << "thune " << this->_amount << std::endl;
		i++;
	}
	return ;
}

void	Account::makeDeposit(int sum) {
	std::cout << "makeDeposit " << sum << std::endl;
	return ;
}

void	Account::displayStatus(void) const {
	std::cout << "displayStatus" << std::endl;
	return ;
}

bool	Account::makeWithdrawal(int sum) {
	std::cout << "makeWithdrawal " << sum << std::endl;
	return true;
}