/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:44:28 by akarahan          #+#    #+#             */
/*   Updated: 2022/05/21 13:24:26 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( void ) {}

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created";
	std::cout << std::endl;

	++_nbAccounts;
	_totalAmount += initial_deposit;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed";
	std::cout << std::endl;
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp( void )
{
	  time_t rawtime;
	struct tm * timeinfo;
	char buffer[80];

	time (&rawtime);
	timeinfo = localtime(&rawtime);

	strftime(buffer,80,"%Y%m%d_%I%M%S",timeinfo);
	std::string str(buffer);

    std::cout << "[" << str << "] ";
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:";
	std::cout << _totalAmount << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals;
	std::cout << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_amount += deposit;
	++_nbDeposits;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:";
	std::cout << _amount - deposit << ";deposit:" << deposit;
	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits;
	std::cout << std::endl;

	_totalAmount += deposit;
	++_totalNbDeposits;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (_amount - withdrawal >= 0)
	{
		_amount -= withdrawal;
		++_nbWithdrawals;
	
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:";
		std::cout << _amount + withdrawal << ";withdrawal:" << withdrawal;
		std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals;
		std::cout << std::endl;

		_totalAmount -= withdrawal;
		++_totalNbWithdrawals;
		return (true);
	}
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:";
	std::cout << _amount << ";withdrawal:refused";
	std::cout << std::endl;
	return (false);
}

int		Account::checkAmount( void ) const
{
	return(_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
}
