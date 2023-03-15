#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>  
#include <iostream>
#include <string.h>
#include <iomanip> 
#include "Contact.hpp"


class PhoneBook {
private:
    Contact _contact[8];
	int     size;
    int     idx ;
public:
    // PhoneBook();
    void add_contact(std::string info[5]);
    void    print_contact(int i);
    void    print_phonebook();
    void	print_ten(std::string str);
};

#endif