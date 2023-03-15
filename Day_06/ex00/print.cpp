#include "Conversion.hpp"

void    ScalarConverter::printToint(void)
{
    if (!isprint(this->c))
        std::cout << "char : Non displayable\n" ;
    else
        std::cout << "char : " << this->c << "\n";
    std::cout << "int : " << this->i << "\n";
    std::cout << "float : " << this->f << ".0f" << "\n";
    std::cout << "double : " << this->d << ".0" <<  "\n";
}

void    ScalarConverter::printTofloat(void)
{
    if (!isprint(this->c))
        std::cout << "char : Non displayable\n" ;
    else
        std::cout << "char : " << this->c << "\n";
    std::cout << "int : " << this->i << "\n";
    std::cout << "float : " << this->f << "f" << "\n";
    std::cout << "double : " << this->d << "\n";
}

void    ScalarConverter::printTochar(void)
{
    if (!isprint(this->c))
        std::cout << "char : Non displayable\n" ;
    else
        std::cout << "char : " << this->c << "\n";
    std::cout << "int : " << this->i << "\n";
    std::cout << "float : " << this->f << "f" << "\n";
    std::cout << "double : " << this->d << "\n";
}

void    ScalarConverter::printTodouble(void)
{
    if (!isprint(this->c))
        std::cout << "char : Non displayable\n" ;
    else
        std::cout << "char : " << this->c << "\n";
    std::cout << "int : " << this->i << "\n";
    std::cout << "float : " << this->f << "f" << "\n";
    std::cout << "double : " << this->d << "\n";
}

void    ScalarConverter::printError(void)
{
    std::cout << "char : " << "impossible"<< "\n";
    std::cout << "int : " << "impossible" << "\n";
    std::cout << "float : " << "nan" << "f" << "\n";
    std::cout << "double : " << "nan" << "\n";
}
