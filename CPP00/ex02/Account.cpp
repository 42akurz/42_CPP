#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

Account::Account(int initial)
{
	Account::_displayTimestamp();

	std::cout << "index:" << t::_nbAccounts << ";amount:" << initial << ";created" << std::endl;
	this->_accountIndex = t::_nbAccounts;
	this->_amount = initial;
	t::_nbAccounts++;
	t::_totalAmount += initial;
}

Account::~Account(void)
{
	Account::_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();

	std::cout << "accounts:" << t::getNbAccounts() << ";total:" << t::getTotalAmount() << ";deposits:" << t::getNbDeposits() << ";withdrawals:" << t::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();

	int	p_amount = this->_amount;

	this->_amount += deposit;
	Account::_totalAmount += deposit;

	this->_nbDeposits += 1;
	Account::_totalNbDeposits += 1;

	std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();

	if (this->checkAmount() - withdrawal < 0)
	{
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
		return false;
	}
	else
	{
		int	p_amount = this->_amount;

		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;

		this->_nbWithdrawals += 1;
		Account::_totalNbWithdrawals += 1;

		std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return true;
	}
}

int	Account::checkAmount( void ) const
{
	return this->_amount;
}

void	Account::_displayTimestamp( void )
{
	std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);

	std::cout << "[" << now->tm_year + 1900;
	std::cout << std::setw(2) << std::setfill('0') << now->tm_mon + 1;
	std::cout << std::setw(2) << std::setfill('0') << now->tm_mday << "_";
	std::cout << std::setw(2) << std::setfill('0') << now->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << now->tm_min;
	std::cout << std::setw(2) << std::setfill('0') << now->tm_sec << "] ";
}

int Account::t::_nbAccounts = 0;
int Account::t::_totalAmount = 0;
int Account::t::_totalNbDeposits = 0;
int Account::t::_totalNbWithdrawals = 0;