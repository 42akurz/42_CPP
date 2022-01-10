#include "phoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook 	constructor called" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook 	destructor called" << std::endl;
}

void	PhoneBook::addContact(int i)
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkSecret;

	std::cout << "[First Name]: ";
	getline(std::cin, firstName);
	std::cout << "[Last Name]: ";
	getline(std::cin, lastName);
	std::cout << "[Nick Name]: ";
	getline(std::cin, nickName);
	std::cout << "[Phone Number]: ";
	getline(std::cin, phoneNumber);
	std::cout << "[Darkest Secret]: ";
	getline(std::cin, darkSecret);

	this->contacts[i].setContact(firstName, lastName, nickName, phoneNumber, darkSecret);
}

void	PhoneBook::showAllContacts(int i)
{
	int	c = 0;

	if (this->fullFlag == 1)
		i = 8;
	while (c < i)
	{
		std::cout << std::setw(10) << c + 1 << "|";
		this->contacts[c].getContactFirstName();
		this->contacts[c].getContactLastName();
		this->contacts[c].getContactNickName();
		std::cout << std::endl;
		c++;
	}
}

void	PhoneBook::showSpecificContact(int i) const
{
	int	index = 0;

	if (this->fullFlag == 1)
		i = 8;
	while (index < 1 || index > i)
	{
		std::cin >> index;
		if (!std::cin)
		{
			std::cin.clear();
			std::cin.ignore(500, '\n');
		}
		if (index == 42)
			break ;
		if (index < 1 || index > i)
			std::cout << "\033[1;31mEnter valid ID or 42 to return!\033[0m" << std::endl;
	}
	if (index != 42)
		this->contacts[index - 1].getContact();
	std::cin.ignore(100, '\n');
}