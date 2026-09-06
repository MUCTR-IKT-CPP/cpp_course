#include <iostream>
#include <cstdarg>

using namespace std;

class Point{
    public:
        int x = 0;
        int y = 0;
        void printPoint(){
            cout << "(" << x << ", " << y << ")" << endl;
        }
        int getX() {
            return this->x;
        };
        int getY(){
            return this->y;
        }
        Point(int x, int y){
            this->x = x;
            this->y = y;
        }
};

int main(){
    Point p(12, 10);
    p.printPoint(); // (12, 10)
    cout << "(" << p.getX() << ", " << p.getY() << ")" << endl; // (12, 10)
    cout << "(" << p.x << ", " << p.y << ")" << endl; // (12, 10)
    return 0;
}
