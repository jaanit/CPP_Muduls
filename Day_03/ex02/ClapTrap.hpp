#ifndef CLAPTRAP_HPP
#define  CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
    std::string _Name;
    unsigned int _Health ;
    unsigned int _Energy  ;
    unsigned int _AtackDamage ;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(ClapTrap const &ClapTrap);
    ClapTrap &operator=(ClapTrap const &ClapTrap);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName();
    void print(){
        std::cout<<"ClapTrap" << _Name << "Atack" << std::endl ;
    }
};
#endif