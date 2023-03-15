#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator            iterator;
        MutantStack();
        ~MutantStack();
        MutantStack(MutantStack &obj);
        iterator begin();
        iterator end();
};


#include "MutantStack.tpp"

#endif