#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
    idx = 0;
    size = 0;
}

void	PhoneBook::print_ten(std::string str)
{
	int i = 0;
	if (str.size() > 10)
		std::cout << std::setw(9) << str.substr(0, 9) << ".|";
	else
	    std::cout << std::setw(10) << str << "|";
}

void    PhoneBook::print_contact(int i) 
{

	std::cout << "first_name : " << _contact[i].get_firstname() << std::endl;
	std::cout << "last_name : " << _contact[i].get_lastname() << std::endl;
	std::cout << "nick_name : " << _contact[i].get_nickname() << std::endl;
	std::cout << "number_phone : " << _contact[i].get_phone_number() << std::endl;
	std::cout << "darkest_secret : " << _contact[i].get_secret() << std::endl;
}

void    PhoneBook::add_contact(std::string info[5])
{
    _contact[idx].set_firstname(info[0]);
    _contact[idx].set_lastname(info[1]);
    _contact[idx].set_nickname(info[2]);
    _contact[idx].set_phone_number(info[3]);
    _contact[idx].set_secret(info[4]);
    if (!std::cin.fail())
        std::cout<< "       The contact has been added successfully     " << std::endl;
    idx++;
    idx %=8;
    if (size < 8)
        size++;
}

void    PhoneBook::print_phonebook()
{
    int i = 0;
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "first_name" << "|";
    std::cout << std::setw(10) << "last_name" << "|";
    std::cout << std::setw(10) << "nick_name" << "|" << std::endl;
    while ((i < size))
    {
        std::cout << std::setw(10) << i << "|";
        print_ten(_contact[i].get_firstname());
        print_ten(_contact[i].get_lastname());
        print_ten(_contact[i].get_nickname());
        std::cout<<"\n";
        i++;
    }
}