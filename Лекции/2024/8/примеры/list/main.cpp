#include <iostream>
#include <list>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    const int N = 10;
    list<int> list;
    cout << "Empty: " << list.empty() << " Size: " << list.size() << endl; // Empty: 1 Size: 0
    for(int i = 0; i < N; i++)
        list.push_back(rand() % 5);
    list.pop_front();
    cout << "Empty: " << list.empty() << " Size: " << list.size() << endl; // Empty: 0 Size: 10
    for(int el: list)
        cout << el << "; "; // 1; 4; 3; 3; 0; 2; 4; 3; 4; 4;
    cout << endl;
    for(int& el: list)
        el *= 2;
    for(int el: list)
        cout << el << "; "; // 2; 8; 6; 6; 0; 4; 8; 6; 8; 8;
    cout << endl;
    list.sort();
    for(int el: list)
        cout << el << "; "; // 0; 2; 4; 6; 6; 6; 8; 8; 8; 8;
    cout << endl;
    list.reverse();
    for(int el: list)
        cout << el << "; "; // 8; 8; 8; 8; 6; 6; 6; 4; 2; 0;
    cout << endl;
    list.unique();
    for(int el: list)
        cout << el << "; "; // 8; 6; 4; 2; 0;
    cout << endl;
}



