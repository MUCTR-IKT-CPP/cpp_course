#include <iostream>

using namespace std;

union Value{
    int i = 0;
    double f;
    char c;
};

struct Date{
    int day;
    int month;
    int year;
};

typedef int** DoublePointerINT;
typedef unsigned long long int ULLI;
typedef Date* DatePointer;
typedef Value& ReferenceValue; 

int main(){
    DoublePointerINT dpi = new int*[10];
    ULLI big_int = 18'446'744'073'709'551'615LLU;
    DatePointer dp = new Date{1, 1, 2001};
    Value value;
    value.c = 'h';
    ReferenceValue rvalue = value;
    cout << dpi << sizeof(dpi) << endl; // 0xe443808
    cout << big_int << sizeof(big_int) << endl; // 184467440737095516158
    cout << dp->year << endl; // 2001
    cout << rvalue.c << endl; // h
    return 0;
}
