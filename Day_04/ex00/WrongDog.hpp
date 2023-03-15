#ifndef WrongDog_HPP
#define WrongDog_HPP

#include "animal.hpp"
#include "WrongAnimal.hpp"

class WrongDog: public WrongAnimal
{
public:
    WrongDog();
    WrongDog(WrongDog const &WrongDog);
    ~WrongDog();
    WrongDog &operator=(WrongDog const &WrongDog);
    void makeSound(void) const; 
};

#endif