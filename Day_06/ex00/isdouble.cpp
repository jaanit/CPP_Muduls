#include "Conversion.hpp"

void    isdouble(ScalarConverter &x)
{
    x.d = std::stod(x._input);
    x.i = static_cast<int>(x.d);
    x.c = static_cast<char>(x.d);
    x.f = static_cast<float>(x.d);
    x.printTodouble();
}