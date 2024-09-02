#include <iostream>
#include <string>
#include <cstdarg>

using namespace std;

class Weapon{
    public:
        Type type;
        string name;
        double damage;
        double distance;
        Weapon(string name, double damage, double distance, Type type): 
            name(name), damage(damage), distance(distance), type(type)
        {}
        virtual void printCharacteristics(bool without_endl = false){
            cout << "type: " << type << "; name: " << name << "; damage: " << damage << "; distance: " << distance;
            if(!without_endl) cout << endl;
        }
};

class NotWeaponWithoutError{
    void printCharacteristics(){
        cout << "I am can do it " << endl;
    }
};

class NotWeaponWithError{
    void print(){
        cout << "I am cant do it " << endl;
    }
};

int main(){
    cout << "\n--|-- Ошибка приведение не к тому типу --|--\n" << endl;

    void* test;
    test = new NotWeaponWithoutError();
    ((Weapon*)test)->printCharacteristics(); // Segmentation Fault
    delete test; // warning: deleting 'void*' is undefined [-Wdelete-incomplete]
    test = new NotWeaponWithError();
    ((Weapon*)test)->printCharacteristics(); // Segmentation Fault
    delete test; // warning: deleting 'void*' is undefined [-Wdelete-incomplete]
    return 0;
}
