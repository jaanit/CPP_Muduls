#include "Conversion.hpp"

void    isInt(ScalarConverter &x)
{
    x.i = atoi(x._input);
    if (x.i > INT_MAX || x.i< INT_MIN)
        x.printError();
    else{
    x.c = static_cast<char>(x.i);
    x.f = static_cast<float>(x.i);
    x.d = static_cast<double>(x.i);
    x.printToint();
    }
}



