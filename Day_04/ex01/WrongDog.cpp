#include "WrongDog.hpp"


WrongDog::WrongDog()
{
    std::cout<<" Creat An WronDog\n";
    _type= "WrongDog";
}


WrongDog::WrongDog(WrongDog const &WrongDog)
{
    std::cout<<"WrongDog : Copy constructor Called\n";
    *this = WrongDog;
}

WrongDog &WrongDog::operator=(WrongDog const &WrongDog)
{
    this->_type = WrongDog._type;
    return (*this);
}

WrongDog::~WrongDog(void)
{
    std::cout << "WrongDog : Destructor called\n" << std::endl;
}

void WrongDog::makeSound(void) const
{
    std::cout << "WrongDog :  Unknow The Sound !!\n" << std::endl;
}