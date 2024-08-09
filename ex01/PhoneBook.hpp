#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact book[8];
	int		i;
	bool	nuberOfContact;
public:
	PhoneBook();
	~PhoneBook();

	int	AddContact();
	int	SeachContact();
};

#endif