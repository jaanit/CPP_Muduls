#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    (void)ac;
    std::ifstream file("data.csv");
    std::ifstream input(av[1]);
     if (!file.is_open() || !input.is_open()){
        std::cerr << "Error: could not open file." << std::endl;
        exit(1);
    }
    std::string line_input;
    std::string line;
    std::map<std::string, float> data_input, data;
    std::map<std::string, float>::iterator it;
    std::string date, exchange, date_input, exchange_input;

    while(std::getline(file, line))
    {
        line.erase(std::remove_if(line.begin(), line.end(), ::isspace), line.end());
        if (line == "date,exchange_rate")
            continue;
        if (line.find(',') != 10)
        {
            std::cout << "Error: wrong format : " << line << std::endl;
            continue;
        }
        date = line.substr(0, line.find(','));
        if (dateIsValid(date))
        {
            std::cout << "Error: wrong date : " << date  << std::endl;
            continue;
        }
        exchange = line.substr(line.find(',')+1);
        data[date] = atof(exchange.c_str());
    }
    while (std::getline(input, line_input)) 
    {
        if (line_input.empty())
            continue;
        line_input.erase(std::remove_if(line_input.begin(), line_input.end(), ::isspace), line_input.end());
        if (line_input.find('|') != 10)
        {
            std::cout << "Error: bad input =>" << line_input  << std::endl;
            continue;
        }
        date_input = line_input.substr(0, line_input.find('|'));
        if (dateIsValid(date_input))
        {
            std::cout << "Error: wrong date_input : " << date_input << std::endl;
            continue;
        }
        exchange_input = line_input.substr(line_input.find('|')+1);
        double exachangeInput = atof(exchange_input.c_str());
        if (exachangeInput < 0)
        {
            std::cout << "Error: not a positive number" << std::endl;
            continue;
        }
        if (exachangeInput > 1000)
        {
            std::cout << "Error: too large a number." << std::endl;
            continue;
        }
        it = data.lower_bound(date_input);
        if (it->first != date_input)
            it--;
        exachangeInput*=it->second;
        std::cout << date_input << "=>"  << exchange_input << "=" << exachangeInput <<  "\n";
    }
    file.close();
    input.close();
    return 0;
}
