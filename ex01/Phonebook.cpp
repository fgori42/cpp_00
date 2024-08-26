#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook created" << std::endl;
	this->id = 0;
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
		if (support.length() != 10)
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
	this->book[this->id] = tmp;
	this->id++;
	if (id == 8)
	{
		this->nuberOfContact = true;
		id = 0;
	}
	return (1);
}

static void PrintTen(std::string str)
{
	if (str.length() <= 10)
	{
		for(int i = str.length(); i < 10; i++)
			std::cout << " ";
		std::cout << str;
	}
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
	}
	std::cout << "|";
}

static void PutOneContact(Contact contact, int nbr)
{
	std::string	str;
	std::cout << "|         " << nbr + 1 << "|";
	str = contact.getName();
	PrintTen(str);
	str = contact.getLastname();
	PrintTen(str);
	str = contact.getNickname();
	PrintTen(str);
	std::cout << std::endl;

}

static int	NewToi(std::string str)
{
	int	i;
	std::stringstream ss(str);
	ss >> i;
	if (i > 0 && i < 9)
		return i;
	return (-1);
}

int	PhoneBook::SeachContact()
{
	std::string	number;
	std::string	str;
	int			nbr;
	int			limit;

	if (!nuberOfContact)
		limit = id;
	else
		limit = 8;
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	for(int i = 0; i < limit; i++)
		PutOneContact(book[i], i);
	std::cout << "Select the index" << std::endl;
	while (1)
	{
		std::getline(std::cin, number);
		nbr = NewToi(number);
		if (nbr < 1 || nbr > limit)
		{
			std::cout << "please enter a valid number from 1 to " << limit << std::endl;
			continue;
		}
		break;
	}
	nbr -= 1;
	std::cout << "|First name| Last name|  Nickname|Ph. number|Dk. secret|" << std::endl << "|";
	str = book[nbr].getName();
	PrintTen(str);
	str = book[nbr].getLastname();
	PrintTen(str);
	str = book[nbr].getNickname();
	PrintTen(str);
	str = book[nbr].getPhone();
	PrintTen(str);
	str = book[nbr].getSecret();
	PrintTen(str);
	std::cout << std::endl;

	return (1);
}