#include <iostream>
#include <vector>
#include <deque>
#include <string>

using namespace std;

void print(vector<int> container){
    for(auto element: container){
        cout << element << (element != *container.rbegin() ? " ,": "");
    }
    cout << endl;
}

void print(deque<int> container){
    for(auto element: container){
        cout << element << (element != *container.rbegin() ? " ,": "");
    }
    cout << endl;
}

int main(){
    vector<int> vector_data {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> deque_data {12, 11};
    print(vector_data);
    for(auto el: vector_data){
        if(el %2 == 0)
            deque_data.push_front(el);
        else
            deque_data.push_back(el);
        cout << "(" << deque_data.front() << " " << deque_data.back() << ")" 
        << (el != *vector_data.rbegin() ? " ,": "");
    }
    cout << endl;
    print(deque_data);
    return 0;
}



