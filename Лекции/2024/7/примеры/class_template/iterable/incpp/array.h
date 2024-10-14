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
                Iterator(int index, Array<T>* container);
                Iterator& operator++();
                T& operator*();
                bool operator!=(Iterator& it);
        };
        Array(const int N, T nuller);
        T& operator[](int i);
        int getLen();
        void unite(Array& second);
        Iterator& begin();
        Iterator& end();
        template <typename FT>
        friend std::ostream& operator<<(std::ostream& out, Array<FT>& arr);
};

#endif