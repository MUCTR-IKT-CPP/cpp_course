#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

void print(vector<int> container){
    for(auto element: container){
        cout << element << (element != *container.rbegin() ? " ,": "");
    }
    cout << endl;
}

// void print(stack<int> container){
//     for(auto element: container){ // error: отсуствует метод begin
//         cout << element << (element != *container.rbegin() ? " ,": "");
//     }
//     cout << endl;
// }

void print(queue<int> container){
    while(!container.empty()) {
        auto element = container.front();
        cout << "(" << container.front() << " " << container.back() << ") ";
        container.pop();
        cout << element << (!container.empty() ? " ,": "");
    }
}

int main(){
    vector<int> vector_data {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    queue<int> queue_data;
    print(vector_data);
    for(auto el: vector_data){
        queue_data.push(el);
        cout << "(" << queue_data.front() << " " << queue_data.back() << ")" 
        << (el != *vector_data.rbegin() ? " ,": "");
    }
    cout << endl;
    print(queue_data);
    return 0;
}



