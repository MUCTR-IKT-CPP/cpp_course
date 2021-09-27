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
    cout << sizeof(value) << endl;
    printValue(value);
    value.i = 56;
    printValue(value);
    value.c = 'h';
    printValue(value);
    value.f = 12.434;
    printValue(value);
    cout << value;
    return 0;
}
