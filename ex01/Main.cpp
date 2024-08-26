#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>


int main()
{
	PhoneBook phone;
	std::string support;

	std::cout << "Hi, how do you prefer to continue?" << std::endl;
	while(1)
	{
		std::getline(std::cin, support);
		if (support == "ADD")
		{
			phone.AddContact();
		}
		else if (support == "SEARCH")
		{
			phone.SeachContact();
		}
		else if (support == "EXIT")
		{
			break;
		}
		else
			std::cout << "Please use a correct input ADD, SEACH or EXIT" << std::endl;
		std::cout << "Write a comand" << std::endl;
	}
}