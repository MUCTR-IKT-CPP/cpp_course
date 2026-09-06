#include <iostream>
#include <string>
#include <cstdarg>

using namespace std;

class Weapon{
    public:
        string name;
        double damage;
        double distance;
        Weapon(string name, double damage, double distance): 
            name(name),
            damage(damage),
            distance(distance)
        {}
        void printCharacteristics(){
            cout << 
            "name: " << name << 
            "\ndamage: " << damage << 
            "\ndistance: " << distance << endl;
        }
};

class Pistol: public Weapon{
    public:
        int rounds_in_holder;
        double caliber;
        Pistol(string name, double damage, double distance, int rounds_in_holder, double caliber):
            rounds_in_holder(rounds_in_holder),
            caliber(caliber),
            Weapon(name, damage, distance)
        {}
        void printCharacteristics(){
            Weapon::printCharacteristics();
            cout << 
            "rounds_in_holder: " << rounds_in_holder << 
            "\ncaliber: " << caliber << endl;
        }
        double shotByDistance(double distance){
            if(distance > this->distance){
                cout << "To far" << endl;
                return 0;
            }else {
                return damage;
            }
        }
};

class Sword: public Weapon{
    public:
        string steel;
        double length;
        Sword(string name, double damage, double distance, string steel, double length):
            steel(steel),
            length(length),
            Weapon(name, damage, distance)
        {}
        void printCharacteristics(){
            Weapon::printCharacteristics();
            cout << 
            "steel: " << steel << 
            "\nlength: " << length << endl;
        }
        double strike(){
            return damage;
        }
};

int main(){
    Weapon w("Test", 0, 0);
    Pistol p("9mm", 10, 15, 9, 9.);
    Sword s("ecs", 10, 1, "1060 CARBON STEEL", 1.5);
    w.printCharacteristics();
    p.printCharacteristics();
    cout << p.shotByDistance(8) << endl;
    cout << p.shotByDistance(20) << endl;
    s.printCharacteristics();
    cout << s.strike() << endl;
    return 0;
}


