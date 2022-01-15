/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toni <toni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 09:33:27 by toni              #+#    #+#             */
/*   Updated: 2022/01/15 10:15:43 by toni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account:: _totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	static int i = 0;

	_nbAccounts++;

	_accountIndex = i;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	
	_displayTimestamp();
	std::cout << "index:" << i << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created";
	std::cout << std::endl;

	i++;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed";
	std::cout << std::endl;
}

void Account::makeDeposit(int deposit)
{
	if (deposit <= 0)
		return;

	int p_amount = this->_amount;

	this->_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_nbDeposits++;

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << p_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
}

bool Account::makeWithdrawal(int withdrawl)
{
	if (this->_amount - withdrawl < 0)
	{
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << this->_amount << ";";
		std::cout << "withdrawl:" << "refused";
		std::cout << std::endl;

		return false;
	}

	int p_amount = this->_amount;

	this->_amount -= withdrawl;
	_totalAmount -= withdrawl;
	_totalNbWithdrawals++;
	_nbWithdrawals++;

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << p_amount << ";";
	std::cout << "withdrawl:" << withdrawl << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawls:" << this->_nbWithdrawals;
	std::cout << std::endl;

	return true;
}

int Account::checkAmount() const
{
	return this->_amount;
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawls:" << this->_nbWithdrawals << ";";
	std::cout << std::endl;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawls:" << Account::getNbWithdrawals();
	std::cout << std::endl;
}

void Account::_displayTimestamp()
{
	time_t raw_time;
	time(&raw_time);
	
	struct tm *p_local_time = localtime(&raw_time);

	std::cout << "[";
	std::cout << p_local_time->tm_year << p_local_time->tm_mon << p_local_time->tm_wday;
	std::cout << "_";
	std::cout << p_local_time->tm_hour << p_local_time->tm_min << p_local_time->tm_sec;
	std::cout << "] ";
}
