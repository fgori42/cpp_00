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
	Contact();
	~Contact();
};

#endif