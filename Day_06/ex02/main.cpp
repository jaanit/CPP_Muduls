#include "Base.hpp"
#include <iostream>
#include <cstdlib>
int main()
{


    srand(time(0));
    Base    *data = generate();
    identify(data);
    identify(*data);
    delete data;


}