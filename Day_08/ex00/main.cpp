#include <vector>
#include <iostream>
#include <algorithm>
#include "easyfind.h"

int main(){
    std::vector<int> vector;
    for (int i = 0; i< 10; i++)
        vector.push_back(i);

    std::vector<int>::iterator iter = vector.begin();
    while (iter != vector.end())
    {
        std::cout << *iter << " ";
        iter++;
    }
    std::cout << std::endl;
    int a = easyfind<std::vector<int> >(vector, 8);
    std::cout << a << std::endl;
}