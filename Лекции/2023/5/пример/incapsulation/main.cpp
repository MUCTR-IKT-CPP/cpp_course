#include <iostream>
#include <string>
#include <cstdarg>

using namespace std;

class Weapon{
    private:
        string name;
        double damage;
        double distance;
    protected:
        double getDistance(){
            return distance;
        }
        double getDamage(){
            return distance;
        }
        Weapon(string name, double damage, double distance): 
            name(name),
            damage(damage),
            distance(distance)
        {}
    public:
        string getName(){
            return name;
        }
        void printCharacteristics(){
            cout << 
            "name: " << name << 
            "\ndamage: " << damage << 
            "\ndistance: " << distance << endl;
        }
};

class Pistol: public Weapon{
    private:
        int rounds_in_holder;
        double caliber;
    public:
        Pistol(string name, double damage, double distance, int rounds_in_holder, double caliber):
            rounds_in_holder(rounds_in_holder),
            caliber(caliber),
            Weapon(name, damage, distance)
        {}
        void printPistolCharacteristics(){
            printCharacteristics();
            cout << 
            "rounds_in_holder: " << rounds_in_holder << 
            "\ncaliber: " << caliber << endl;
        }
        double shotByDistance(double distance){
            if(distance > getDistance()){
                cout << "To far" << endl;
                return 0;
            }else {
                return getDamage();
            }
        }
};


int main(){
    // Weapon w("Test", 0, 0); <-- ошибка
    Pistol p("9mm", 10, 15, 9, 9.);
    // w.printCharacteristics();
    p.printPistolCharacteristics();
    cout << p.shotByDistance(8) << endl;
    cout << p.shotByDistance(20) << endl;
    return 0;
}
