#include <iostream>

using namespace std;

int main(){
    int* p1 = new int {10};
    int* p2 = p1;
    int n;
    cout << p1 << endl;
    cout << p2 << endl;
    cout << *p1 << endl;
    cout << *p2 << endl;
    cout << (p1 == nullptr) << endl;
    cout << (p2 == nullptr) << endl;
    delete p2;
    cout << p1 << endl;
    cout << p2 << endl;
    cout << *p1 << endl;
    cout << *p2 << endl;
    // if(p1 == nullptr)
    //     cout << "nullptr" << endl;
    // else
    //     cout << "not nullptr" << endl;
    cout << (p1 == nullptr) << endl;
    cout << (p2 == nullptr) << endl;
    cin >> n;
    *p1 = 10;
    cout << *p1 << endl;
    cout << *p2 << endl;
    cin >> n;
}