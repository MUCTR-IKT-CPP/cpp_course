#include <iostream>

using namespace std;

enum Status{
    SUCCESS,
    FAIL,
    WARNING,
    ERROR,
    INFO,
};

int main(){
    Status current_status(SUCCESS);
    cout << current_status << endl;                      // 0
    current_status = FAIL;
    cout << current_status << endl;                      // 1
    Status* pstatus = &current_status;
    cout << pstatus << " = " << &current_status << endl; // 0x61fe0c = 0x61fe0c
    *pstatus = INFO;
    cout << current_status << endl;                      // 4
    Status& rstatus = current_status;
    current_status = WARNING;
    cout << rstatus << endl;                             // 2
    return 0;
}
