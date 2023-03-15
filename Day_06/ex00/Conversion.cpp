#include "Conversion.hpp"


ScalarConverter::ScalarConverter(char *input)
{
    std::cout<<"Default constrature called \n";
    _input = input;
    this->ft_parse(_input);
}

int     isMix(char *input)
{
    int digit = 0;
    int alpha = 0;
    unsigned long i =-1;
    while(++i<strlen(input)-1)
    {
        if (isdigit(input[i]))
            digit =1;
        else if (isalnum(input[i]))
            alpha = 1;
    }
    if((alpha && digit))
            return(0);
    return(1);
}

void    ScalarConverter::ft_parse(char *input)
{ 
    int virg =0;
    int i = 0;
    while(isdigit(input[i]) || input[i]== '.')
    {
       if (input[i] == '.')
            virg++;
        i++;
    }

    if (!isMix(input) || virg>1)
        error();
    else if(input[i] && !input[i+1]&& i==0)
        this->_type = 1;
    else if (i && virg==1 && input[i]=='f' && (input[i+1]=='\0'))
        this->_type = 2;
    else if (i && virg==1)
        this->_type = 3;
    else if (i && virg == 0 )
        this->_type = 4;
    else
        this->_type = 0;
    this->convert();
}

void    ScalarConverter::convert(void)
{   
    switch (this->_type)
    {
    case 1:
        isChar(*this);
        break;
    case 2:
        isfloat(*this);
        break;
    case 3:
        isdouble(*this);
        break;
    case 4:
        isInt(*this);
        break;
    default:
        this->printError();
    }
}

void    ScalarConverter::error()
{
    std::cout<<"error\n";
    exit(1);
}

