#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
    string text;
    getline(cin, text);
    cout << text << endl;
    cout << text.length() << endl;
    set<char> unique_letters;
    for(auto letter: text){
        if(letter != ' ')
            unique_letters.insert(letter);
    }
    cout << "Во введенном тексте, содержатся следующие уникальные буквы:" << endl;
    for(auto letter: unique_letters){
        cout << letter;
        if(letter != *unique_letters.rbegin()) 
            cout << ", ";
    }
    return 0;
}



