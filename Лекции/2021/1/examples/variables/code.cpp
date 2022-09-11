#include <iostream>
#include <string>

using namespace std;

int main(){
    int a = 0;
    double b = 10.;
    float c = 1.f;
    string s = "небольшая строка";
    
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