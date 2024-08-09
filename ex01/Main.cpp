#include "PhoneBook.hpp"


int main()
{
	PhoneBook phone;
	std::string support;

	while(1)
	{
		std::cout << "Hi, how do you prefer to continue?" << std::endl;
		std::getline(cin, support);
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