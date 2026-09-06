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
    friend void printInt(MyPrintedInt& mpi);
};

void printInt(MyPrintedInt& mpi){
    cout << "MPI: " << mpi.data << endl;
}

void printInt(int i){
    cout << "Int: " << i << endl;
}

int main(){
    MyPrintedInt mpi(10);
    // cout << mpi.data << endl; <- ошибка
    printInt(mpi); // 10
    printInt(12); // 10
    return 0;
}
