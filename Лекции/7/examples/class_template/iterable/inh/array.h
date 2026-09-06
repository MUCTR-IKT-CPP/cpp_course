#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template <typename T>
class Array{
    private:
        T* container = nullptr;
        int length = 0;
    public:
        class Iterator{
            private:
                Array<T>* container;
                int index;
            public:
                Iterator(int index, Array<T>* container): 
                    container(container), 
                    index(index > container->length ? -1: index){
                }
                Iterator& operator++(){
                    if(index != container->length - 1)
                        index++;
                    else
                        index = -1;
                    return *this;
                }
                T& operator*(){
                    return (*container)[index];
                }
                operator!=(Iterator& it){
                    return it.index != index;
                }
        };
        Array(const int N, T nuller = 0): length(N), container(new T[N]){
            for(int i = 0; i < length; i++)
                container[i] = nuller;
        }
        T& operator[](int i) {
            return container[i];
        }
        getLen() {
            return length;
        }
        void unite(Array& second){
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
        Iterator& begin(){
            return *(new Iterator(0, this));
        }
        Iterator& end(){
            return *(new Iterator(-1, this));
        }
        template <typename TF>
        friend std::ostream& operator<<(std::ostream& out, Array<TF>& arr);
};

template <typename TF>
std::ostream& operator<<(std::ostream& out, Array<TF>& arr){
    out << "[ ";
    for(int i = 0; i < arr.length; i++)
        if (i != arr.length - 1)
            out << arr[i] << ", ";
        else
            out << arr[i];
    out << " ]";
    return out;
}

#endif