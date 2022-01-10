#include "contact.hpp"

Contact::Contact(void)
{
	std::cout << "Contact		constructor called" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Contact		destructor called" << std::endl;
}

void	Contact::setContact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	this->_firstName = firstName;
	this->_lastName = lastName;
	this->_nickName = nickName;
	this->_phoneNumber = phoneNumber;
	this->_darkestSecret = darkestSecret;
}

void	Contact::getContact(void) const
{
	std::cout << "[First Name]:		" << this->_firstName << std::endl;
	std::cout << "[Last Name]:		" << this->_lastName << std::endl;
	std::cout << "[Nick Name]:		" << this->_nickName << std::endl;
	std::cout << "[Phone Number]:		" << this->_phoneNumber << std::endl;
	std::cout << "[Darkest Secret]:	" << this->_darkestSecret << std::endl;
}

void	Contact::getContactFirstName(void)
{
	if (this->_firstName.length() > 10)
	{
		this->_firstName.resize(10);
		this->_firstName[9] = '.';
	}
	std::cout << std::setw(10) << this->_firstName << "|";
}

void	Contact::getContactLastName(void)
{
	if (this->_lastName.length() > 10)
	{
		this->_lastName.resize(10);
		this->_lastName[9] = '.';
	}
	std::cout << std::setw(10) << this->_lastName << "|";
}

void	Contact::getContactNickName(void)
{
	if (this->_nickName.length() > 10)
	{
		this->_nickName.resize(10);
		this->_nickName[9] = '.';
	}
	std::cout << std::setw(10) << this->_nickName << "|";
}
