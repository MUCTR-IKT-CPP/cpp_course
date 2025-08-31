#include <iostream>

using namespace std;

int global = 10;

void testVisible(){
    cout << "line 1(testVisible)[8]: global = " << global << endl;
    int global = 20;
    if(global == 15){
        global = 99;
    }else{
        int global = 5;
    }
    cout << "line 8(testVisible)[15]: global = " << global << endl;
}


int main(){
    cout << "line 1(main)[20]: global = " << global << endl;
    global += 5;
    cout << "line 3(main)[22]: global = " << global << endl;
    testVisible();
    cout << "line 5(main)[24]: global = " << global << endl;
    for(int i = 0; i < 10; i++){
        if(i < 5){
            int global = 10;
        }else{
            global++;
        }
    }
    cout << "line 13(main)[32]: global = " << global << endl;
}