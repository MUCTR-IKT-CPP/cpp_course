#include "array.h"

template <typename T>
Array<T>::Array(const int N, T nuller): length(N), container(new T[N]){
    for(int i = 0; i < length; i++)
        container[i] = nuller;
}

template <typename T>
T& Array<T>::operator[](int i) {
    return container[i];
}

template <typename T>
int Array<T>::getLen() {
    return length;
}

template <typename T>
void Array<T>::unite(Array& second){
    T* result = new T[length + second.length];
    int k = 0;
    for(int i = 0; i < length; i++){
        result[k++] = container[i];
    }
    for(int i = 0; i < second.length; i++)
        result[k++] = second[i];
    delete container;
    container = result;
    length += second.length;
}

template <typename T> typename Array<T>::Iterator& Array<T>::begin(){
    return *(new Iterator(0, this));
}

template <typename T>
typename Array<T>::Iterator& Array<T>::end(){
    return *(new Iterator(-1, this));
}

template <typename T>
Array<T>::Iterator::Iterator(int index, Array<T>* container): 
    container(container), 
    index(index > container->length ? -1: index){
}

template <typename T>
typename  Array<T>::Iterator& Array<T>::Iterator::operator++(){
    if(index != container->length - 1)
        index++;
    else
        index = -1;
    return *this;
}

template <typename T>
T& Array<T>::Iterator::operator*(){
    return (*container)[index];
}

template <typename T>
bool Array<T>::Iterator::operator!=(Array<T>::Iterator& it){
    return it.index != index;
}

template <typename FT>
std::ostream& operator<<(std::ostream& out, Array<FT>& arr){
    out << "[ ";
    for(int i = 0; i < arr.length; i++)
        if (i != arr.length - 1)
            out << arr[i] << ", ";
        else
            out << arr[i];
    out << " ]";
    return out;
}

template class Array<int>;
template class Array<double>;
template std::ostream& operator<<(std::ostream& out, Array<int>& arr);
template std::ostream& operator<<(std::ostream& out, Array<double>& arr);
