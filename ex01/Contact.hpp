#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
private:
	std::string	name;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;

public:

	void	addName(std::string &name);
	void	addLastName(std::string &lastName);
	void	addNickname(std::string &nickname);
	void	addNumber(std::string &number);
	void	addDarkestSecret(std::string &number);

	std::string	getName();
	std::string	getLastname();
	std::string	getNickname();
	std::string	getPhone();
	std::string	getSecret();

	Contact();
	~Contact();
};

#endif