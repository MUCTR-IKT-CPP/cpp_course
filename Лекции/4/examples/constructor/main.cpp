#include <iostream>
#include <cstdarg>

using namespace std;

class Point{
    public:
        int x = 0;
        int y = 0;
        double* error;
        void printPoint(){
            cout << "(" << x << ", " << y << ")" << endl;
        }
        void printAddress(){
            cout << this << endl;
        }
        Point(int x, int y){
            this->x = x;
            this->y = y;
            this->error = new double {0.5};
        }
        Point(const Point& point){
            this->x = point.x;
            this->y = point.y;
            this->error = new double {*point.error};
        }
        ~Point(){
            delete this->error;
        }
};

int main(){
    Point p(12, 10);
    p.printPoint(); // (12, 10)
    p.printAddress(); // 0x61fe10
    cout << p.error << endl; // 0x6e4220
    Point p2 = p;
    p2.printPoint(); // (12, 10)
    p2.printAddress(); // 0x61fe00
    cout << p2.error << endl; // 0x6e4260
    return 0;
}
