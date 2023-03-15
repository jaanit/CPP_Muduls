#include "Conversion.hpp"

int main(int ac, char **av)
{
    if (ac==2)
    {
       ScalarConverter scalar(av[1]);
    }
    else
        std::cout<<"opppps\n";
    return(0);

}