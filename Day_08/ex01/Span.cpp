#include "Span.hpp"

Span::Span(unsigned int n)
{
    _N = n;
    _size = 0;
}

Span::~Span()
{
}

void    Span::addNumber(int n)
{
    if (_size < _N)
    {
        _vec.push_back(n);
        _size++;
    }
}

int Span::longestSpan()
{
    int maxIndex = *std::max_element(_vec.begin(), _vec.end());
    int minIndex = *std::min_element(_vec.begin(), _vec.end());
    return(maxIndex-minIndex);
}

int     Span::shortestSpan()
{
    int res = 0;
    sort(_vec.begin(), _vec.end());
    std::vector<int>::iterator it = _vec.begin();
    std::vector<int>::iterator its = _vec.begin();
    *its++;
    int min = *its - *it;
    while(its !=_vec.end() )
    {
        res = *its - *it;
            if(min>=res)
                min = res;
            *its++;
            *it++;
    }
    return(min);
}