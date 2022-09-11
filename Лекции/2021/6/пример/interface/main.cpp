#include <iostream>
#include <string>
#include <cstdarg>

using namespace std;

class Weapon{
    public:
        virtual void printName() = 0;
};

class Pistol: public Weapon{
    private:
        string name;
    public:
        Pistol(string name): name(name) {}
        void printName(){
            cout << "Pistol name: " << name << endl;
        }
};

class Sword: public Weapon{
    private:
        string name;
    public:
        Sword(string name): name(name) {}
};

int main(){
    const int N = 1;
    // Weapon w("JustWeapon"); // использование объекта абстрактного типа класса "Weapon" не допускается
    Pistol p("9mm"); 
    Sword s("Excalibur"); // использование объекта абстрактного типа класса "Sword" не допускается
    // w.printName(); // name: JustWeapon
    p.printName(); // Pistol name: 9mm
    s.printName(); // Sword name: Excalibur // использование объекта абстрактного типа класса "Sword" не допускается
    Weapon* weapons[N] {&p};
    for(int i = 0; i < N; i++)
        weapons[i]->printName();
    // Pistol name: 9mm
    Weapon& w2 = p;
    // Weapon w3 = s; // использование объекта абстрактного типа класса "Weapon" не допускается
    w2.printName(); // Pistol name: 9mm
    // w3.printName(); // name: Excalibur
    return 0;
}



