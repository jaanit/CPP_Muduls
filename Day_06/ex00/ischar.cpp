#include "Conversion.hpp"

void    isChar(ScalarConverter &x)
{
    x.c = x._input[0];
    x.i = static_cast<int>(x.c);
    x.f =  static_cast<float>(x.c);
    x.d = static_cast<double>(x.c);
    x.printTochar();
}
