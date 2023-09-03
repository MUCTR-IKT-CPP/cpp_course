#include <iostream>
#include <cstdarg>

using namespace std;

class Point{
    public:
        int x = 0;
        int y = 0;
        Point* shiftX(int shift) {
            x += shift;
            return this;
        }
        Point* shiftY(int shift) {
            y += shift;
            return this;
        }
        Point* printPoint(){
            cout << "(" << x << ", " << y << ")" << endl;
            return this;
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
    Point* p = new Point(12, 10);
    p->printPoint()->shiftX(-5)->printPoint()->shiftY(20)->printPoint();
    // (12, 10)
    // (7, 10)
    // (7, 30)
    cout << "(" << p->getX() << ", " << p->getY() << ")" << endl; // (7, 30)
    p->shiftX(23)->shiftY(-15);
    cout << "(" << p->x << ", " << p->y << ")" << endl; // (30, 15)
    return 0;
}
