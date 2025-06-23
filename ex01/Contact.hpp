#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nick;
		std::string _number;
		std::string _darkSecret;

	public:
		Contact();
		~Contact();
		void set_first_name(std::string str);
		void set_last_name(std::string str);
		void set_nick(std::string str);
		void set_number(std::string str);
		void set_dark_secret(std::string str);
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nick();
		std::string get_number();
		std::string get_dark_secret();	
};

#endif