#include "Brain.hpp"

Brain::Brain()
{
    std::cout<<" Brain : are Created\n";
}


Brain::Brain(Brain const &Brain)
{
    std::cout<<"Brain : Copy constructor Called\n";
    *this = Brain;
}

Brain &Brain::operator=(Brain const &brain)
{
    for (int i =0; i<=100;i++)  
        ideas[i] = brain.ideas[i];
    return (*this);
}

Brain::~Brain(void)
{
    std::cout << "Brain : are dellet\n" << std::endl;
}
