#include <iostream>

using namespace std;

union Value{
    int i = 0;
    double f;
    char c;
};

void printValue(Value& val){
    cout << val.i << ' ' << val.f << " '" << val.c << "'"  << endl;
}

int main(){
    Value value;
    cout << sizeof(value) << endl; // 8
    printValue(value); // 0 0 ''
    value.i = 56;
    printValue(value); // 56 2.76677e-322 '8'
    value.c = 'h';
    printValue(value); // 104 5.13828e-322 'h'
    value.f = 12.434;
    printValue(value); // 104 5.13828e-322 'h'
    cout << value; // Ошибка
    return 0;
}
