#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <sstream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact book[8];
	int		id;
	bool	nuberOfContact;
public:
	PhoneBook();
	~PhoneBook();

	int	AddContact();
	int	SeachContact();
};

#endif