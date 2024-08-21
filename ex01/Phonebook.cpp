#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook created" << std::endl;
	this->i = 0;
	this->nuberOfContact = false;
}

PhoneBook::~PhoneBook()
{
	std::cout << "closed PhoneBook" << std::endl;
}

int PhoneBook::AddContact()
{
	std::string support;
	Contact tmp;
	this->i++;
	if (i == 9)
	{
		this->nuberOfContact = true;
		i -= 9;
	}

	while (1)
	{
		std::cout << "Nome of the new contact :" << std::endl;
		std::getline(std::cin, support);
		if (support.empty())
		{
			std::cout << "Please, insert a name" << std::endl;
			continue ;
		}
		tmp.addName(support);
		break;
	}
	std::cout << "Lastname of the new contact :" << std::endl;
	std::getline(std::cin, support);
	tmp.addLastName(support);
	std::cout << "The nikname of the contact :" << std::endl;
	std::getline(std::cin, support);
	tmp.addNickname(support);
	while (1)
	{
		std::cout << "Digit the number of the new contact :" << std::endl;
		std::getline(std::cin, support);
		if (support.length() != 9)
		{
			std::cout << "Please,  digit a real telephone number!" << std::endl;
			continue;
		}
		tmp.addNumber(support);
		break;
	}
	std::cout << "digit the darkest secret of the contact :" << std::endl;
	std::getline(std::cin, support);
	tmp.addDarkestSecret(support);

	this->book[this->i] = tmp;
	return (1);
}

int	PhoneBook::SeachContact()
{
	int	i;

	std::cout << "|***********|***********|**********|" << std::endl;
	return (1);
}