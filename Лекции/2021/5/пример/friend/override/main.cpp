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
    friend ostream& operator<<(ostream& os, MyPrintedInt& mpi);
};

ostream& operator<<(ostream& os, MyPrintedInt& mpi){
    return os << "MPI: " << mpi.data;
}

int main(){
    MyPrintedInt mpi(10);
    cout << 5 << " " << mpi << " " << 15 << endl; // 5 MPI: 10 15
    return 0;
}
