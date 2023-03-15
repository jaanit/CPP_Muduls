#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _Health(12), _Energy(3), _AtackDamage(0) 
{
    std::cout<< "Using Constractor called \n ";
    _Name = name;
}


ClapTrap::ClapTrap()
{
    std::cout<< "ClapTrap : Default Constractor Called.. \n" ;
}

ClapTrap::ClapTrap(ClapTrap const &ClapTrap)
{
    std::cout<<"ClapTrap : Copy Constractor Called.. \n";
    *this = ClapTrap ;
}

ClapTrap::~ClapTrap()
{
    std::cout<<"ClapTrap: Distractor Called \n";
}

ClapTrap    &ClapTrap::operator=(ClapTrap const &ClapTrap)
{
    _Name = ClapTrap._Name;
    _Energy = ClapTrap._Energy;
    _Health = ClapTrap._Health;
    _AtackDamage = ClapTrap._AtackDamage;
    std::cout << "ClapTrap : Copy assignment operator called" << std::endl;
    return (*this);
}

void    ClapTrap::attack(const std::string& target)
{
    if (_Energy > 0)
    {
        _Energy-=1;
        std::cout <<"ClapTarap " << _Name << " Attacks " << target << " causin " << _AtackDamage << " point of damage! " <<std::endl;
    }
    else{
        std::cout <<"ClapTarap " << _Name  << " can't Attack " << target << std::endl;
    }

}

std::string ClapTrap::getName()
{
    return(_Name);
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_Health >= amount)
    {
        std::cout<<"when " << getName() << " Attacking: lose " << amount << " point\n";
        _Health-=amount;
    }
    else
        std::cout<< getName() << " was dead \n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_Health <=0)
        std::cout<< "ClaTrap can't repairs itself he is already dead \n ";
    else{
        _Energy-=1;
        _AtackDamage+=1;
        _Health+=amount;
        if (_Health>10)
            _Health = 10;
        std::cout<< "ClaTrap repairs itself \n ";
    }
}

