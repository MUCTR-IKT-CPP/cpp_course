#include <iostream>
#include <map>
#include <string>

using namespace std;

const auto& maximum(const auto& a, const auto& b){
    return a > b ? a: b;
}

int main(){
    int i = maximum(13, 10);
    cout << i << endl; // 13
    
    double d = maximum(0.97, 1.76);
    cout << d << endl; // 1.76

    char s = maximum('a', '1');
    cout << s << endl; // a
}



