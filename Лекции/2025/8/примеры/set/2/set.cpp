#include <iostream>
#include <set>
#include <string>

using namespace std;

void print(set<char> st){
    for(auto ch: st){
        cout << ch << (ch != *st.rbegin() ? " ,": "");
    }
    cout << endl;
}

int main(){
    set<char> 
        first {'a', 'b', 'c', 'd', 'e'},
        second {'f', 'i', 'j', 'k', 'a', 'b'},
        third {};
    print(first);
    print(second);
    third.merge(first);
    print(third);
    auto ch = third.extract('i');
    print(third);
    cout << ch.empty() << endl;
    // cout << ch.value() << endl; error
    ch = third.extract('b');
    cout << ch.empty() << " " << ch.value() << endl;
    print(third);
    third.merge(second);
    print(third);
    return 0;
}



