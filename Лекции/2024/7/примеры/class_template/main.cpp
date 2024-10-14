#include <iostream>
#include <ctime>
#include <string>

using namespace std;

template <typename T>
class Array{
    private:
        T* container = nullptr;
        int length = 0;
    public:
        Array(const int N, T nuller = 0): length(N), container(new T[N]){
            for(int i = 0; i < length; i++)
                container[i] = nuller;
        }
        T& operator[](int i);
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
        template <typename TF>
        friend ostream& operator<<(ostream& out, Array<TF>& arr);
};

template <typename T>
T& Array<T>::operator[](int i) {
    return container[i];
}

template <typename T>
ostream& operator<<(ostream& out, Array<T>& arr){
    // Описание
    out << "[ ";
    for(int i = 0; i < arr.length; i++)
        if (i != arr.length - 1)
            out << arr[i] << ", ";
        else
            out << arr[i];
    out << " ]";
    return out;
}

int main(){
    srand(time(0));
    Array<int> first(10);
    Array<int> second(5);
    Array<double> third(6, 0.5);
    for(int i = 0; i < second.getLen(); i++)
        second[i] = rand() % 100;
    cout << first << endl; // [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ]
    cout << second << endl; // [ 45, 78, 71, 67, 30 ]
    cout << third << endl; // [ 0.5, 0.5, 0.5, 0.5, 0.5, 0.5 ]
    first.unite(second);
    cout << first << endl; // [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 38, 91, 22, 34 ]
    // first.unite(third); // не существует подходящего определяемого пользователем преобразования из "Array<double>" в "const Array<int>"
}



