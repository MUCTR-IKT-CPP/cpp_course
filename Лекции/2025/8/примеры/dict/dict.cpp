#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    string text;
    getline(cin, text);
    cout << text << endl;
    cout << text.length() << endl;
    map<char, int> letters;
    for(auto letter: text){
        if(letters.count(letter) == 0)
            letters[letter] = 1;
        else
            letters[letter]++;
    }
    for(auto letter: letters){
        cout << "Букв " << letter.first << ": " << letter.second << endl;
    }
    return 0;
}



