#include <iostream>
#include <cstdarg>

using namespace std;

double average(double n=0., ...){
    double *p = &n;        
    double sum = 0, count = 0;    
    while (*p){
        sum+=(*p);
        cout << (*p) << " + ";
        p++;
        count++;
    }
    cout << " = ";
    return ((sum)?sum/count:0);
}

int main(){
    double a = 10.;
    double b = 12.;
    double c = 13.456;
    int n = 2;
    int m = 100;
    cout << average(a, b, c, (double)n, (double)m, 0) << endl;
    cout << average(a, b, c, 0) << endl;
    cout << average() << endl;
    cout << average(n, m, 0) << endl;
    return 0;
}
