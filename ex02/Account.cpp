#include <vector>
#include <algorithm>
#include <ctime>
#include <functional>
#include <iostream>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	char	date[17];

	std::time_t now = std::time(NULL);
	std::strftime(date, sizeof(date), "%Y%m%d_%H%M%S", std::localtime(&now));
	std::cout << "[" << date << "]";
}

Account::Account( int initial_deposit )
{
	static int	index = 0;
	static int	total= 0;

	this->_amount = initial_deposit;
	total += this->_amount;
	this->_totalAmount = total;
	this->_accountIndex = index;
	index++;
	this->_nbAccounts += index;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_totalNbDeposits = 0;
	this->_totalNbWithdrawals = 0;
	_displayTimestamp();
	std::cout << " index:" << index << ";amount:" << initial_deposit << ";created" << std::endl;
}

Account::~Account()
{
}

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}
int	Account::getTotalAmount( void )
{
	return _totalAmount;
}
int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}
int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() << ";total:"\
	<< getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}


void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits += 1;
	this->_totalNbDeposits += 1;
	std::cout << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;

}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << " index" << this->_accountIndex <<  ";p_amount:" << this->_amount << ";withdrawal:";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	else
	{
		this->_amount -= withdrawal;
		this->_totalNbWithdrawals++;
		this->_nbWithdrawals++;
		std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	return (true);
}

int		Account::checkAmount( void ) const
{
	return _nbAccounts;
}
void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits;" << this->_nbDeposits << ";withdrawals:" << getNbWithdrawals() << std::endl;
}
