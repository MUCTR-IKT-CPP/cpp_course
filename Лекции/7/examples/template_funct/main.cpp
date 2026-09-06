#include <iostream>
#include <map>
#include <string>

using namespace std;

template <typename T>
const T& maximum(const T& a, const T& b){
    return a > b ? a: b;
}

class MyCombinedString{
    private:
        string s;
    public:
        MyCombinedString(string s): s(s){}        
    friend bool operator>(
        const MyCombinedString& msa, const MyCombinedString& msb
    );
    friend ostream& operator<<(
        ostream& out, const MyCombinedString& ms
    );
};
bool operator>(
    const MyCombinedString& msa, const MyCombinedString& msb
){
    return msa.s.length() > msb.s.length(); 
}
ostream& operator<<(ostream& out, const MyCombinedString& ms){
    return out << ms.s;
}

int main(){
    int i = maximum(13, 10);
    cout << i << endl;
    
    double d = maximum(0.97, 1.76);
    cout << d << endl;

    char s = maximum('a', '1');
    cout << s << endl;

    MyCombinedString ms = maximum(
        MyCombinedString("12.1234"), 
        MyCombinedString("12")
        );
    cout << ms << endl;
}



