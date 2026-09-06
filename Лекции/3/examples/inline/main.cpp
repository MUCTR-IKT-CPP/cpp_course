#include <iostream>
#include <string>

using namespace std;

string hellow_function() {
    return "Hellow";
}

inline string world_inline_funtion(){
    return "World";
}

int main(){
    cout << hellow_function() << ' ' << world_inline_funtion() << endl;
    return 0;
}
