#include "RPN.hpp"
#include <iostream>
#include <stack>
#include <string>

int main(int ac, char **av) {
    if(ac != 2) {
        std::cout << "Usage: ./RPN \"expression\"" << std::endl;
        return 1;
    }
    std::stack<int> s;
    std::string expression = av[1];
    std::string op = "+-/*";
    if (ac !=2)
    {
            std::cout << "One Agrgument in Input Please !\n" << std::endl;
            exit(1);
    }
    for (size_t i = 0; expression[i]; i++)
    {
        if (expression[i] == ' ')
            continue;
        if (isdigit(expression[i]))
            s.push(expression[i] - '0');
        else if (op.find(expression[i]) != std::string::npos)
        {
            if (s.size() < 2)
            {
                std::cout << "Error\n" << std::endl;
                exit(1);
            }
            int op2 = s.top();
            s.pop();
            int op1 = s.top();
            s.pop();
            switch(expression[i]) {
                case '+':
                    s.push(op1 + op2);
                    break;
                case '-':
                    s.push(op1 - op2);
                    break;
                case '*':
                    s.push(op1 * op2);
                    break;
                case '/':
                    if (op2 == 0)
                    {
                        std::cout << "Error" << std::endl;
                        exit(1);
                    }
                    s.push(op1 / op2);
                    break;
            }
        }
        else 
        {
            std::cout << "Error\n" << std::endl;
            exit(1);
        }
    }
    if (s.size() == 1)
        std::cout  << s.top() << std::endl;
    else
        std::cout << "Error\n" << std::endl;
    return 0;
}
