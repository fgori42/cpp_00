#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>


int main()
{
	PhoneBook phone;
	std::string support;

	while(1)
	{
		std::cout << "Hi, how do you prefer to continue?" << std::endl;
		std::getline(std::cin, support);
		if (support == "ADD")
		{
			phone.AddContact();
		}
		else if (support == "SEACH")
		{
			phone.SeachContact();
		}
		else if (support == "EXIT")
		{
			break;
		}
	}
}