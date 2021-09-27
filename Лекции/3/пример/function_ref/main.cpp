#include <iostream>
#include <cstdarg>

using namespace std;

double square(double x)   {
    return x * x;
}

void for_each(double* array, const int N, double (*function)(double )){
    for(int i = 0; i < N; i++){
        array[i] = function(array[i]);
    }
}

void print(double* array, const int N){
    for(int i = 0; i < N; i++){
        cout << array[i] << ' ';
    }
    cout << endl;
}

int main(){
    const int N = 10;
    double array[N] = {0,1,2,3,4,5,6,7,8,9};
    print(array, N);
    for_each(array, N, square);
    print(array, N);
    return 0;
}
