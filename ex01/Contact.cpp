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

std::string Contact::getName()
{
	return(this->name);
}

std::string Contact::getLastname()
{
	return(this->lastName);
}

std::string Contact::getNickname()
{
	return(this->nickname);
}

std::string Contact::getPhone()
{
	return(this->phoneNumber);
}

std::string Contact::getSecret()
{
	return(this->darkestSecret);
}

Contact::Contact()
{
}
Contact::~Contact()
{
}