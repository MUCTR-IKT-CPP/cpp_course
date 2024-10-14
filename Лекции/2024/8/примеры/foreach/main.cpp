#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    const int N = 10;
    int array[N] = {0};
    for(int i = 0; i < N; i++){
        array[i] = (rand() % 100);
    }
    for(int i = 0; i < N; i++)
        cout << array[i] << "; ";
    cout << endl;
    for(int& el: array)
        cout << el << "; ";
    cout << endl;
    for(auto el: array)
        cout << el << "; ";    
    cout << endl;
    return 0;
}



