#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac !=2)
        {
            std::cout << "Invalid Error : \n";
            exit(1);
        }
    Harl obj;
    obj.complain(av[1]);
}