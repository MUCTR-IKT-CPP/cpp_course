#include <iostream>
#include <array>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    const int N = 10;
    std::array<int, 3> a1 { {1, 2, 3} };  // требуются двойные фигурные скобки,
    std::array<int, 3> a2 = {1, 2, 3}; // за исключением операций присваивания
    std::array<int, N> arrayCPP = {0};
    for(int el: arrayCPP)
        cout << el << "; "; // 0; 0; 0; 0; 0; 0; 0; 0; 0; 0;
    cout << endl;
    arrayCPP.fill(1);
    for(int el: arrayCPP)
        cout << el << "; "; // 1; 1; 1; 1; 1; 1; 1; 1; 1; 1;
    cout << endl;
    cout << arrayCPP.size() << endl; // 10
    for(int& i: arrayCPP)
        i = rand() % 1000;
    for(int el: arrayCPP)
        cout << el << "; "; // 200; 558; 79; 150; 462; 270; 810; 241; 893; 821;
    cout << endl;
    for(auto i = arrayCPP.begin(); i != arrayCPP.end(); i++)
        *i = rand() % 100;
    for(int el: arrayCPP)
        cout << el << "; "; // 58; 11; 64; 69; 70; 53; 97; 57; 78; 63;
    cout << endl;
}



