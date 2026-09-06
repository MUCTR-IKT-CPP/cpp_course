#include <iostream>
#include <cstdarg>

using namespace std;

void square(int x){
    cout <<      << x * x << endl;
}

void square(double x){
    cout << "double: " << x * x << endl;
}

void square(long x){
    cout << "long: " << x * x << endl;
}

int main(){
    double dn = 13.456;
    int n = 2;
    long ln = 100;
    square(n);
    square(dn);
    square(ln);
    return 0;
}
