#ifndef WrongCat_HPP
#define WrongCat_HPP

#include "animal.hpp"
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
    WrongCat(WrongCat const &WrongCat);
    WrongCat();
    ~WrongCat();
    WrongCat &operator=(WrongCat const &WrongCat);
    void    makeSound() const;
};

#endif