template <class T>
Array<T>::Array() {
    std::cout<<"Array : Default Constructor Called\n";
    _arr = new T[0];
}
template <class T>
Array<T>::Array(unsigned int n){

    std::cout<<"Array : Constructor Called\n";
    _arr = new T[n];
    this->_size = n;
}

template <class T>
Array<T>::Array(Array const &obj){
    
        std::cout<<"Array : Copy assignment operator Called\n";
    *this = obj;
}

template <class T>
Array<T>&Array<T>::operator=(Array const &obj){
    std::cout<<"Array : Copy  Constructor Called\n";
    this->_size = obj._size;
    this->_arr = new T[this->_size ];
    size_t i=0;
    while (i<this->_size)
    {
        this->_arr[i] = obj._arr[i];
        i++;
    }
    return *this;
}

template <class T>
T &Array<T>::operator[](size_t size_input){
    std::cout<<"Array : subscript operator\n";
    if (size_input > _size - 1)
        throw std::runtime_error ("index out of range\n");
    return _arr[size_input];
}

template <class T>
Array<T>::~Array()
{
    std::cout<<"Array : Distructor Called\n";

    if(_arr)
        delete _arr;
}