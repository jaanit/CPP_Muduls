#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

class ScalarConverter {
    public:
        ScalarConverter(char *input);
        int _type;
        char *_input;
        int i;
        char c;
        float f;
        double d;
        void    convert();
        void   ft_parse(char *input);
        void    printToint(void);
        void    printTofloat(void);
        void    printTochar(void);
        void    printTodouble(void);
        void    printError(void);
        void    error();
};

void    isdouble(ScalarConverter &x);
void   isInt(ScalarConverter &x);
void    isChar(ScalarConverter &x);
void    isfloat(ScalarConverter &x);
void    error(void);
#endif