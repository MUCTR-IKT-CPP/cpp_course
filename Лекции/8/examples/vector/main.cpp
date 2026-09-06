#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <ctime>

using namespace std;

// class MyNumber{
//     string number;
//     public:
//         MyNumber(string number):number(number) {}
//         double getDouble(){
//             stringstream stream;
//             stream << number;
//             double result = 0;
//             stream >> result;
//             return result;
//         }
//         int getInt(){
//             return (int) getDouble();
//         }
// };

int main(){
    srand(time(0));
    const int N = 5;
    vector<int> v(N);
    cout << v.size() << endl;
    for(int i = 0; i < N; i++){
        v[i] = (rand() % 100);
         cout << v[i] << "; ";
    }
    cout << endl;
    vector<int>::iterator i = v.begin();
    cout << *i << endl;
    i++;
    cout << &i << endl;
    cout << *(v.end()) << endl;
    cout << *i << endl;
    v.erase(i);
    cout << v.size() << endl;
    cout << *(--i) << endl;
    return 0;
}



