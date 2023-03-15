#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>

class Span
{
private:
    unsigned int _N;
    unsigned int _size;
    std::vector<int> _vec;
public:
    Span(unsigned int n);
    ~Span();
    void    addNumber(int number);
    int     shortestSpan();
    int     longestSpan();
};



#endif