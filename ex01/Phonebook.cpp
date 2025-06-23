#include <Phonebook.hpp>

PhoneBook::PhoneBook()
{
	_index = 0;
}

PhoneBook::~PhoneBook()
{}

bool isPrint(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
		if (!std::isprint(str[i]))
			return false;
	return true;
}

void PhoneBook::add()
{
    std::string input = "";

    std::cout << "Enter first name: ";
    while (input.empty())
	{
        std::getline(std::cin, input);
		if (std::cin.eof()) 
		{
			std::cout << std::endl;
			return ;
		}
		if (isPrint(input))
			_contacts[_index % 8].set_first_name(input);
		else
		{ 
			input = "";
			std::cout << "Invalid char! Try again: " << std::endl;
		}
	}
	input = "";
	std::cout << "Enter last name: ";
	while (input.empty())
	{
        std::getline(std::cin, input);
		if (std::cin.eof()) 
		{
			std::cout << std::endl;
			return ;
		}
		if (isPrint(input))
			_contacts[_index % 8].set_last_name(input);
		else
		{ 
			input = "";
			std::cout << "Invalid char! Try again: " << std::endl;
		}
	}
	input = "";
	std::cout << "Enter nick: ";
	while (input.empty())
	{
        std::getline(std::cin, input);
		if (std::cin.eof()) 
		{
			std::cout << std::endl;
			return ;
		}
		if (isPrint(input))
			_contacts[_index % 8].set_nick(input);
		else
		{ 
			input = "";
			std::cout << "Invalid char! Try again: " << std::endl;
		}
	}
	input = "";
	std::cout << "Enter number: ";
	while (input.empty())
	{
        std::getline(std::cin, input);
		if (std::cin.eof()) 
		{
			std::cout << std::endl;
			return ;
		}
		if (input.find_first_not_of("0123456789") == std::string::npos)
			_contacts[_index % 8].set_number(input);
		else
		{ 
			input = "";
			std::cout << "Only numbers! Try again: " << std::endl;
		}
	}
	input = "";
	std::cout << "Enter darkest secret: ";
	while (input.empty())
	{
        std::getline(std::cin, input);
		if (std::cin.eof()) 
		{
			std::cout << std::endl;
			return ;
		}
		if (isPrint(input))
			_contacts[_index % 8].set_dark_secret(input);
		else
		{ 
			input = "";
			std::cout << "Invalid char! Try again: " << std::endl;
		}
	}
	input = "";
	_index++;
}

void formatPrint(std::string str)
{
	if (str.length() > 10)
	{
		str = str.substr(0, 9) + ".";
		std::cout << std::right << std::setw(10) << str << "|";
	}
	else
		std::cout << std::right << std::setw(10) << str << "|";
}

void PhoneBook::search()
{
	std::cout << std::setw(10) << "Index" << "|"
    << std::setw(10) << "First Name" << "|"
    << std::setw(10) << "Last Name" << "|"
    << std::setw(10) << "Nickname" << "|" << std::endl;

	for(int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		formatPrint(_contacts[i].get_first_name());
		formatPrint(_contacts[i].get_last_name());
		formatPrint(_contacts[i].get_nick());
		std::cout << std::endl;
	}
	std::string input;
    std::cout << "Enter the index of the contact to display: " << std::endl;
    std::getline(std::cin, input);

	if (std::cin.eof()) 
	{
		std::cout << std::endl;
		return ;
	}
	if (input.size() != 1 || input[0] < '1' || input[0] > '8')
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	int index = input[0] - '1';
	std::cout << "First name:     " << _contacts[index].get_first_name() << std::endl;
    std::cout << "Last name:      " << _contacts[index].get_last_name() << std::endl;
    std::cout << "Nickname:       " << _contacts[index].get_nick() << std::endl;
    std::cout << "Phone number:   " << _contacts[index].get_number() << std::endl;
    std::cout << "Darkest secret: " << _contacts[index].get_dark_secret() << std::endl;
}
