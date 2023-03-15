#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    std::string _type;
public:
    Animal();
    Animal(std::string type);
    Animal(Animal &animal);
    Animal  &operator=(Animal const &animal);
    ~Animal();
    virtual void    makeSound()const;
    std::string getType(void) const;
};

#endif