#include "phoneBook.hpp"

void	printGreen(std::string s)
{
	std::cout << "\033[1;32m" << s << "\033[0m" << std::endl;
}

int	main()
{
	PhoneBook	phoneBook;
	std::string	buff;
	int			i = 0;

	phoneBook.fullFlag = 0;
	printGreen("[ADD], [SEARCH], [EXIT]");
	while (getline(std::cin, buff))
	{
		if (buff == "ADD")
		{
			phoneBook.addContact(i);
			i++;
			if (i == 8)
			{
				phoneBook.fullFlag = 1;
				i = 0;
			}
		}
		else if (buff == "SEARCH")
		{
			phoneBook.showAllContacts(i);
			printGreen("Enter Contact ID:");
			phoneBook.showSpecificContact(i);
		}
		else if (buff == "EXIT")
			return (0);
		printGreen("[ADD], [SEARCH], [EXIT]");
	}
	return (0);
}
