#include "PmergeMe.hpp"
#include <iomanip>

int     isNumber(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return (0);
        i++;
    }
    return (1);
}

int main(int ac, char **av)
{
    (void)ac;
    std::vector<int> my_vec;
    std::vector<int>::iterator it;
    int i = 0;
    while(av[++i])
        if (!isNumber(av[i]))
        {
            std::cout << "Error" << std::endl;
            exit(1);
        }
        else
        my_vec.push_back(atoi(av[i]));
        if(atoi(av[1]) < 0)
        {
            std::cout << "Error\n" << std::endl;
            exit(1);
        }
    std::cout << "Befor : ";
    for(it = my_vec.begin(); it!=my_vec.end();it++)
        std::cout<< *it << " " ;
     std::cout<<  "\n" ;
    clock_t start = clock();
    mergeInsert(my_vec);
    clock_t end = clock();
    double duration = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    std::cout << "After : ";
    for(it = my_vec.begin(); it!=my_vec.end();it++)
    std::cout<< *it << " " ;
    std::cout<< std::fixed << std::setprecision(5) << "\nTime to process a range " << my_vec.size() << " Element " << duration << " us\n";

    std::deque<int> my_deque;
    std::deque<int>::iterator itde;
    i = 0;
    while (av[++i])
        if (!isNumber(av[i]))
        {
            std::cout << "Error" << std::endl;
            exit(1);
        }
        else
        my_deque.push_back(atoi(av[i]));
    clock_t start2 = clock();
    mergeInsert(my_deque);
    clock_t end2 = clock();
    double duration2 = static_cast<double>(end2 - start2) / CLOCKS_PER_SEC;
    std::cout << std::fixed << std::setprecision(5) << "Time to process a range " << my_deque.size() << " Element " << duration2 << " us\n";
}

