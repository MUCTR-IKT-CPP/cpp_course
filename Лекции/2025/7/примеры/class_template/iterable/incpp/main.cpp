#include <ctime>
#include "array.h"

using std::cout;
using std::endl;

int main(){
    srand(time(0));
    Array<int> first(10, 0);
    Array<int> second(5, 0);
    Array<double> third(6, 0.5);
    for(int i = 0; i < second.getLen(); i++)
        second[i] = rand() % 100;
    for(auto el: first)
        cout << el << " ";
    cout << endl; // 0 0 0 0 0 0 0 0 0 0
    cout << first << endl; // [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ]
    cout << second << endl; // [ 45, 78, 71, 67, 30 ]
    cout << third << endl; // [ 0.5, 0.5, 0.5, 0.5, 0.5, 0.5 ]
    first.unite(second);
    cout << first << endl; // [ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 38, 91, 22, 34 ]
    // first.unite(third); // не существует подходящего определяемого пользователем преобразования из "Array<double>" в "const Array<int>"
}



