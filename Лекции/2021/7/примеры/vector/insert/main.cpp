#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    const int N = 10;
    vector<int> v(N);
    vector<int>::iterator iter = v.begin();
    vector<int>::reverse_iterator iter = v.rbegin();
    return 0;
}



