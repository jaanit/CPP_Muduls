#include "replace.hpp"

Sed::Sed(std::string fileName)
{
	_inFile.open(fileName);
	if(!_inFile.is_open())
	{
		std::cout << "cant read from fille\n";
		exit(1);
	}
    	
	_outFile.open(fileName+".replace");
	if(!_inFile.is_open())
	{
		std::cout << "cant open fille\n";
		exit(1);
	}
	_outFile << std::endl;
}

void	Sed::replace(std::string s1, std::string s2)
{
	size_t		index;
	std::string	str;
	std::string	rep;

	std::getline(_inFile, str, '\0');
	while(1)
	{
		index = str.find(s1);
		if (index == str.npos || s1 == "")
			break ;
		rep += str.substr(0, index);
		rep += s2;
		str = str.substr(index + s1.size());
	}
	rep += str;
	_outFile << rep;
}
