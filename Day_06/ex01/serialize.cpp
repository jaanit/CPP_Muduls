#include "serialize.hpp"

Serializer::Serializer()
{
    std::cout<<"Serializer : Constaructore called \n";
}

Data::Data(const std::string &name, const int &age) {
    this->_name = name;
    this->_age = age;

}

uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

Serializer::~Serializer()
{
    std::cout<<"Serializer : Distaructore called \n";
}
