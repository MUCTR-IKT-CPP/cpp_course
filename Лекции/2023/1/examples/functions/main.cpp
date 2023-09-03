#include <iostream>
#include <memory>

using namespace std;

double square(double value){
    return value * value;
}

// void function(int a){
//     cout << a << endl;
// }

// void add(int* to, int from){
//     *to += from;
// }

// void print_array(int* array, const int N){
//     for(int i = 0; i < N; i++){
//       cout << array[i] << ' ';
//     }
//     cout << endl;
// }

// void test_function(const int* n, int * const m){
//    // Блок кода
// }

void counted_function(){
    static int counter = 0; 
    cout << ++counter << endl;
   // Блок кода
}

    // void add(int& to, int from){
    //     to += from;
    // }


int main (){
  
}

// <тип> <название функции>(<тип> <название параметра>, ...){
//     // код функции
//     return <возвращаемое значение тип которого соответствует типу написанному перед функцией>;
// }

// <название функции>(<параметры функции>);