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
    cout << "Max size: " <<v.max_size() << endl; // Max size: 4611686018427387903
    cout << "Empty: " << v.empty() << " Size: " << v.size() << endl; // Empty: 0 Size: 10
    v.resize(20);
    cout << "Size: " << v.size() << endl; // Size: 20
    v.clear();
    cout << "Empty: " << v.empty() << " Size: " << v.size() << endl; // Empty: 1 Size: 0
    v.resize(0);
    cout << "Empty: " << v.empty() << " Size: " << v.size() << endl; // Empty: 1 Size: 0
    for(int i = 0; i < N; i++){
        v.push_back(rand() % 100);
        cout << v.size() << "; "; // 1; 2; 3; 4; 5; 6; 7; 8; 9; 10;
    }
    cout << endl;
    v.resize(0);
    v.reserve(10);
    cout << "Size: " << v.size() << endl; // Size: 0
    for(int i = 0; i < N; i++){
        v.push_back(rand() % 100);
        cout << v.size() << "; "; // 1; 2; 3; 4; 5; 6; 7; 8; 9; 10;
    }
    cout << endl;
    return 0;
}



