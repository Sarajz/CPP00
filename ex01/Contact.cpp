#include <Contact.hpp>

Contact::Contact()
{}

Contact::~Contact()
{}

void Contact::set_first_name(std::string str)
{
	_firstName = str;	
}

void Contact::set_last_name(std::string str)
{
	_lastName = str;
}

void Contact::set_nick(std::string str)
{
	_nick = str;
}

void Contact::set_number(std::string str)
{
	_number = str;
}

void Contact::set_dark_secret(std::string str)
{
	_darkSecret = str;
}

std::string Contact::get_first_name()
{
	return (_firstName);
}

std::string Contact::get_last_name()
{
	return (_lastName);
}

std::string Contact::get_nick()
{
	return (_nick);
}

std::string Contact::get_number()
{
	return (_number);
}

std::string Contact::get_dark_secret()
{
	return (_darkSecret);
}

