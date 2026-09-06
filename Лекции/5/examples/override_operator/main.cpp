#include <iostream>
#include <string>
#include <cstdarg>
#include <ostream>

using namespace std;

class MyPrintedInt{
    private:
        int data;
    public:
        MyPrintedInt(int data): data(data){}
        int operator+(int i) {
            return data + i;
        }
        void print(){
            cout << "MPI: " << data << endl;
        }
};


int main(){
    MyPrintedInt mpi(10);
    mpi.print(); // 10
    cout << mpi + 10 << endl; // 10
    mpi.print(); // 10
    return 0;
}
