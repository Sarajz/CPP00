#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <Contact.hpp>
#include <string>
#include <iostream>
#include <iomanip>

class PhoneBook {
	private:
		Contact _contacts[8];
		int _index;

	public:
		PhoneBook();	
		~PhoneBook();

		void	add();
		void	search();
};

#endif
