/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 11:58:37 by rjaanit           #+#    #+#             */
/*   Updated: 2023/01/03 22:40:54 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

std::string     is_empty(std::string s)
{
    std::string data;
    while(s.empty()){
        std::cout << "Empty List\n .. try again";
        if(!std::getline(std::cin, s))
                exit(1);
    }
    return(data);
}

int     check_isvalid(std::string str)
{
    int i =0;
    while(str[i]){
        if ((str[i] >='0' && str[i]<= '9') || str[i]==' ')  
            i++;
        else
            return(0);
    }
    return(1);
}

int main()
{
    int j = 0;
    std::string s,info[5],index;
    PhoneBook phone_book;
    while("lagala")
    {
        if (!std::cin.fail())
            std::cout<< " << Choose The Option You Need ADD (to add a contact) or SEARCH (to search for contact)  or Exit (exit from the Programe) >>" << std::endl;
        if(!std::getline(std::cin, s))
            exit(1);
    
        if (s == "ADD")
        {
            std::cout << " << ADD_CONTACT >>" << std::endl;
            if (!std::cin.fail())
                std::cout << "first_name : " ;
            while (std::getline(std::cin, info[0]) && info[0].empty())
                std::cout << "ADD a valid first_name : " ;
            if (!std::cin.fail())
                std::cout << "last_name : ";
            while (std::getline(std::cin, info[1]) && info[1].empty())
                std::cout << "ADD a valid last_name : " ;
            if (!std::cin.fail())
                std::cout << "nick_name : " ;
            while (std::getline(std::cin, info[2]) && info[2].empty())
                std::cout << "ADD a valid nick_name : " ;
            if (!std::cin.fail())
                std::cout << "number_phone : " ;
            while (std::getline(std::cin, info[3]) && info[3].empty())
                std::cout << "ADD a valid phone_number : " ;
            while(!check_isvalid(info[3]))
            {
                std::cout << "phone number does not match please try again...  : " ;
                if(!std::getline(std::cin, info[3]))
                    exit(1);
            }
            if (!std::cin.fail())
                std::cout << "darkest_secret :";
            while (std::getline(std::cin, info[4]) && info[4].empty())
                std::cout << "ADD a valid darkest_secret : " ;
                
            phone_book.add_contact(info);
            if (j < 3)
                j++;
        }
        
        else if (s == "SEARCH")
        {
            if (j < 1)
                std::cout<< "There Is No Contact Exist " << std::endl;
            else
            {
            phone_book.print_phonebook();
            if (!std::cin.fail())
                std::cout << " Enter The Contact Index " << std::endl;;
            if(!std::getline(std::cin, index))
                exit(1);
            while (!check_isvalid(index) || atoi(index.c_str()) >= j)
            {
                if (!std::cin.fail())
                    std::cout<<"index does not match please try again : " << std::endl;
                if(!std::getline(std::cin, index))
                    exit(1);
            }
            phone_book.print_contact(atoi(index.c_str()));
            }
        }
        else if (s == "EXIT")
            break;
        else
            std::cout << "Invalid command\n" << std::endl;
    }
}