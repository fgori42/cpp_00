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

	std::cout << "Nome of the new contact :" << std::endl;
	std::getline(cin, support);
	tmp.addName(support);
	std::cout << "lst Nome of the new contact :" << std::endl;
	std::getline(cin, support);
	tmp.addLastName(support);
	

	this->book[this->i] = tmp;
}