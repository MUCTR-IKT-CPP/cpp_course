#include <iostream>
#include <vector>
#include <stack>
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

void print(stack<int> container){
    while(!container.empty()) {
        auto element = container.top();
        container.pop();
        cout << element << (!container.empty() ? " ,": "");
    }
}

int main(){
    vector<int> vector_data {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    stack<int> stack_data;
    print(vector_data);
    for(auto el: vector_data){
        stack_data.push(el);
    }
    print(stack_data);
    return 0;
}



