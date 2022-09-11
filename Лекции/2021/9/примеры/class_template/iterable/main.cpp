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
                    if(index != container->length)
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
        friend ostream& operator<<(ostream& out, Array<TF>& arr);
};
template <typename T>
ostream& operator<<(ostream& out, Array<T>& arr){
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
    for(auto el: first)
        cout << el << endl;
    cout << first << endl; // [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ]
    cout << second << endl; // [ 45, 78, 71, 67, 30 ]
    cout << third << endl; // [ 0.5, 0.5, 0.5, 0.5, 0.5, 0.5 ]
    first.unite(second);
    cout << first << endl; // [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 38, 91, 22, 34 ]
    // first.unite(third); // не существует подходящего определяемого пользователем преобразования из "Array<double>" в "const Array<int>"
}



