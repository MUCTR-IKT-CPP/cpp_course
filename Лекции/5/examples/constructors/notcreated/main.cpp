#include <iostream>
#include <string>
#include <cstdarg>
#include <ostream>

using namespace std;

class NotCreate{
    public:
        int data;
        ostream& operator<<(ostream& os){
            os << data;
            return os;
        }
        static NotCreate& create(int data){
            NotCreate* instance = new NotCreate(data);
            return *instance;
        }
    private:
        NotCreate(int data): data(data){}
};

int main(){
    // NotCreate i1(10); <- ошибка
    // cout << i1 << endl;
    NotCreate& i1 = NotCreate::create(10);
    i1 << cout << endl;
    NotCreate i2 = i1;
    i2 << cout << endl;
    // NotToCopyInt* i3 = new NotToCopyInt(13); <- ошибка
    return 0;
}
