#include "Base.hpp"

Base::Base()
{
}

Base::~Base()
{
}
Base    *generate(void)
{
    switch(rand()%3+1)
    {
        case 1:
            return(new A());
        case 2:
            return(new B());
        case 3:
            return(new C());
    }
    return(new Base());
}

void identify(Base* p)
{

    Base *b ;
    if((b = dynamic_cast<A*>(p)) != NULL)
            std::cout << "type of the base is A" << std::endl;
    else if((b = dynamic_cast<B*>(p)) != NULL)
            std::cout << "type of the base is B" << std::endl;
    else if((b = dynamic_cast<C*>(p)) != NULL)
            std::cout << "type of the base is C" << std::endl;
}

void identify(Base& p)
{

  Base *b ;
    if((b = dynamic_cast<A*>(&p)) != NULL)
            std::cout << "type of the base is A" << std::endl;
    else if((b = dynamic_cast<B*>(&p)) != NULL)
            std::cout << "type of the base is B" << std::endl;
    else if((b = dynamic_cast<C*>(&p)) != NULL)
            std::cout << "type of the base is C" << std::endl;

}
