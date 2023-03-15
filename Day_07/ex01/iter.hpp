#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
template<typename T >void   iter(T array[], int length , void (*fun)(T)){
    if (!array || !length)
        return;
    int i = -1;
    while (++i<length)
        (fun)(array[i]);
}

template<typename T>void    call(T arr)
{
    std::cout<<arr<<std::endl;
}

#endif