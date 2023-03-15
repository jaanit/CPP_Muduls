#include "BitcoinExchange.hpp"

// bool    IsValidFormat(std::string &date)
// {
//     if(date.find('-') == std::string::npos)
//         return(1);
//     if (date.find('-') == 4 && date.find('-', 5) == 7)
//         return(0);
//     return(1);
// }

// int    DateIsValid(std::string date)
// {
//     if (IsValidFormat(date))
//         return(1);
    
//     int year, month, day;
//     year = atoi(date.substr(0, date.find('-')).c_str());
//     month = atoi(date.substr(date.find('-')+1, date.find('-')+3).c_str());
//     day = atoi(date.substr(date.find('-')+4, date.find('-')+6).c_str());
//     if (year < 2009 || year > 2023 || month < 1 || month > 12 || day < 1 || day > 31)
//         return(1);
//     return(0);
// }
bool isLeapYear(int year)
{
    return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
}

int    dateIsValid(std::string date)
{
    std::tm     tm = {};
    char const* format = "%Y-%m-%d";
    char*       end = strptime(date.c_str(), format, &tm);
 
    if (end == NULL) 
        return 1;
    if (date.substr(5, 2) == "02")
    {
        if (atoi(date.substr(8, 2).c_str()) > 29)
            return 1;
        if (!isLeapYear(atoi(date.substr(0, 4).c_str())) && atoi(date.substr(8, 2).c_str()) > 28)
            return 1;
    }
    return 0;
}