#include <iostream>
#include <string>

using namespace std;

struct S {
    int a;      // 4 байта
    char c;     // 1 байт
    double d;   // 8 байт
};

struct S2 {
    int a;    // 4 байта
    int b;    // 4 байта
    char c;   // 1 байт
    double d;    // 8 байт
};

int main(){
    std::cout << offsetof(S, a) << std::endl; // 0
    std::cout << offsetof(S, c) << std::endl; // 4
    std::cout << offsetof(S, d) << std::endl; // 8
    std::cout << sizeof(S) << std::endl;      // 16
    std::cout << alignof (S) << std::endl;    // 8


    std::cout << offsetof(S2, a) << std::endl; // 0
    std::cout << offsetof(S2, b) << std::endl; // 4
    std::cout << offsetof(S2, c) << std::endl; // 8
    std::cout << offsetof(S2, d) << std::endl; // 16
    std::cout << sizeof(S2) << std::endl;      // 24
    std::cout << alignof(S2) << std::endl;     // 8
    return 0;
}
