#include <iostream>
#include <string>
#include <cstdarg>
#include <ostream>

using namespace std;

class NotToCopyInt{
    public:
        int data;
        NotToCopyInt(int data): data(data){}
        ostream& operator<<(ostream& os){
            os << data;
            return os;
        }
    private:
        NotToCopyInt( const NotToCopyInt& );
        void operator=( const NotToCopyInt& );
};

int main(){
    NotToCopyInt i1(10);
    // cout << i1 << endl;
    i1 << cout << endl;
    // NotToCopyInt i2 = i1; <- ошибка
    NotToCopyInt* i3 = new NotToCopyInt(13);
    (*i3) << cout << endl;
    return 0;
}
