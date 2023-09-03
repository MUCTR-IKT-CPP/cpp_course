#include <iostream>
#include <string>
#include <cstdarg>

using namespace std;

class Weapon{
    public:
        string name;
        Weapon(string name): name(name) {}
        void printName(){
            cout << "name: " << name << endl;
        }
};

class Pistol: public Weapon{
    public:
        Pistol(string name): Weapon(name) {}
        void printName(){
            cout << "Pistol name: " << name << endl;
        }
};

class Sword: public Weapon{
    public:
        Sword(string name): Weapon(name) {}
        void printName(){
            cout << "Sword name: " << name << endl;
        }
};

int main(){
    const int N = 3;
    Weapon w("JustWeapon");
    Pistol p("9mm");
    Sword s("Excalibur");
    w.printName(); // name: JustWeapon
    p.printName(); // Pistol name: 9mm
    s.printName(); // Sword name: Excalibur
    Weapon* weapons[N] {&w, &p, &s};
    for(int i = 0; i < N; i++)
        weapons[i]->printName();
    // name: JustWeapon
    // name: 9mm
    // name: Excalibur
    Weapon& w2 = p;
    Weapon w3 = s;
    w2.printName(); // name: 9mm
    w3.printName(); // name: Excalibur
    return 0;
}



