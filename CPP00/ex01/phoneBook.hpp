#pragma once
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "contact.hpp"

class PhoneBook {

	public:
		int		fullFlag;

		PhoneBook();
		~PhoneBook();

		Contact	contacts[8];
		void	addContact(int i);
		void	showAllContacts(int i);
		void	showSpecificContact(int i) const;
};

#endif