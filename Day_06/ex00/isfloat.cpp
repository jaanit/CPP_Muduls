#include "Conversion.hpp"

void    isfloat(ScalarConverter &x)
{
    x.f = atof(x._input);
    x.i = static_cast<int>(x.f);
    x.c = static_cast<char>(x.f);
    x.d = static_cast<double>(x.f);
    x.printTofloat();
}