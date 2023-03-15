template<typename T>
int   easyfind(T param, int search)
{
   typename T::iterator iter;
   iter = std::find(param.begin(), param.end(), search);
   if (iter == param.end())
        std::cout << "error : doest exist !!" << std::endl;
   return (*iter);
}