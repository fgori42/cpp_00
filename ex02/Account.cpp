#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"

Account::Account( int initial_deposit )
{
	static int	index = 0;
	static int	total= 0;

	this->_amount = initial_deposit;
	total += this->_amount;
	this->_totalAmount = total;
	this->_accountIndex = index;
	this->_nbAccounts = index;
	index++;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_totalNbDeposits = 0;
	this->_totalNbWithdrawals = 0;
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

void	displayAccountsInfos( void )
{
	
}

void	Account::makeDeposit( int deposit )
{
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits += 1;
	this->_totalNbDeposits += 1;
}

bool	makeWithdrawal( int withdrawal );
int		checkAmount( void ) const;
void	displayStatus( void ) const;
