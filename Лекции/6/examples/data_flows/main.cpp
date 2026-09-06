#include <iostream>
#include <string>
#include <cstdarg>

using namespace std;

int main(){
    char ch;
    while (cin.get(ch))
        cout << ch;
    string strBuf;
    cout << "line" << endl;
    getline(cin, strBuf);
    cout << strBuf << endl;

    return 0;
}



