#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>

template<class T>
class Array
{
private:
    T *_arr;
    size_t	_size;
public:
    Array();
    Array(unsigned int n);
    Array(Array const &obj);
    Array   &operator=(Array const &obj);
    T   &operator[](size_t obj);
    ~Array();
};

#include "Array.tpp"
#endif