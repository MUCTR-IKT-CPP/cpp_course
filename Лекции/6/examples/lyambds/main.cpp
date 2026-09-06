#include <iostream>
#include <string>
#include <cstdarg>

using namespace std;

class Functor{
    private:
        int calls = 0;
        auto (*function)(auto);
    public:
        Functor(){}
        auto operator() (void** args) {
            calls += 1;
            return function(args);
        }
        int getCalls(){
            return calls;
        }
};

int main(){
    Functor f;
    int a = 10;
    int b = f(a);
    cout << a << endl; // 10
    cout << b << endl; // 11
    cout << f.getCalls() << endl; // 1
    return 0;
}



