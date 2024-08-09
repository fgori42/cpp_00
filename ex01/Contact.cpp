#include "Contact.hpp"

void Contact::addName(std::string &name)
{
	this->name = name;
}

void Contact::addLastName(std::string &lastName)
{
	this->lastName = lastName;
}

void	Contact::addNickname(std::string &nickname)
{
	this->nickname = nickname;
}
void	Contact::addNumber(std::string &number)
{
	this->phoneNumber = number;
}
void	Contact::addDarkestSecret(std::string &secret)
{
	this->darkestSecret = secret;
}