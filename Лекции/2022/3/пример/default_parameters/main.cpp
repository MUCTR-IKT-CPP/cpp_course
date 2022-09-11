#include <iostream>
#include <string>

using namespace std;

void print(string word, string after = " ") {
    cout << word << after;
}


int main(){
    print("Hellow");
    print("World", "\n------------\n");
    // Hellow World
    // ------------
    return 0;
}
