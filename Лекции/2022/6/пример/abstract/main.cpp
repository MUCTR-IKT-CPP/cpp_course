#include <iostream>
#include <string>
#include <cstdarg>

using namespace std;

class Weapon{
    public:
        string name;
        Weapon(string name): name(name) {}
        virtual void printName() = 0;
};

void Weapon::printName() {
    cout << "Weapon name: " << name << endl;
}

class Pistol: public Weapon{
    public:
        Pistol(string name): Weapon(name) {}
        void printName(){
            cout << "Pistol name: " << name << endl;
            Weapon::printName();
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
    const int N = 2;
    // Weapon w("JustWeapon"); // использование объекта абстрактного типа класса "Weapon" не допускается: -- функцию "Weapon::printName" является чистой виртуальной функцией
    Pistol p("9mm");
    Sword s("Excalibur");
    // w.printName(); // name: JustWeapon
    p.printName(); // Pistol name: 9mm
    s.printName(); // Sword name: Excalibur
    Weapon* weapons[N] {&p, &s};
    for(int i = 0; i < N; i++)
        weapons[i]->printName();
    // Pistol name: 9mm
    // Sword name: Excalibur
    Weapon& w2 = p;
    // Weapon w3 = s; // использование объекта абстрактного типа класса "Weapon" не допускается: -- функцию "Weapon::printName" является чистой виртуальной функцией
    w2.printName(); // Pistol name: 9mm
    // w3.printName(); // name: Excalibur
    return 0;
}



