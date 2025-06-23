#include <Phonebook.hpp>

int main()
{
	PhoneBook 	phonebook;
	std::string	str;

	while(1)
	{
		std::cout << "Hi, choose and option: ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof()) 
		{
			std::cout << std::endl;
			return (1);
		}
		if (str == "ADD")
			phonebook.add();
		else if (str == "SEARCH")
			phonebook.search();
		else if(str == "EXIT")
			break ;
		else
			std::cout << "Invalid option" << std::endl;
	}
	
}