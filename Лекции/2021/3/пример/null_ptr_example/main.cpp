#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void generateRandInteger(int* pi){
    if(pi == NULL && pi == nullptr && pi == 0)
        pi = new int {rand()};
}

int main(){
    srand(time(NULL));
    int* pi = NULL;
    // cout << "&" << pi << ": " << *pi <<  endl; // Segmentation fault
    cout << "&" << pi <<  endl;
    pi = generateRandInteger();
    cout << "&" << pi << ": " << *pi <<  endl;
    return 0;
}