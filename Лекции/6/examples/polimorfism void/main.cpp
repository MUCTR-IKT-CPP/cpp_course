#include <iostream>
#include <string>
#include <cstdarg>

using namespace std;

enum Type{
    PISTOL,
    SWORD
};

class Weapon{
    public:
        Type type;
        string name;
        double damage;
        double distance;
        Weapon(string name, double damage, double distance, Type type): 
            name(name), damage(damage), distance(distance), type(type)
        {}
        void printCharacteristics(bool without_endl = false){
            cout << "type: " << type << "; name: " << name << "; damage: " << damage << "; distance: " << distance;
            if(!without_endl) cout << endl;
        }
        Type getType(){
            return type; 
        }
};

class Pistol: public Weapon{
    public:
        int rounds_in_holder;
        string caliber;
        Pistol(string name, double damage, double distance, int rounds_in_holder, string caliber):
            rounds_in_holder(rounds_in_holder), caliber(caliber), Weapon(name, damage, distance, PISTOL)
        {}
        void printCharacteristics(){
            Weapon::printCharacteristics(true);
            cout << "; rounds_in_holder: " << rounds_in_holder << "; caliber: " << caliber << endl;
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
        Sword(string name, double damage, string steel, double length):
            steel(steel), length(length), Weapon(name, damage, length, SWORD)
        {}
        void printCharacteristics(){
            Weapon::printCharacteristics(true);
            cout << "; steel: " << steel << "; length: " << length << endl;
        }
        double strike(){
            return damage;
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

const int NAMES_COUNT = 5;
const std::string PISTOL_NAMES[NAMES_COUNT] {"FN Five-seveN", "Smith & Wesson Model 500", "FN-FNP45", "Beretta 92", "Glock-17"};
const std::string CALIBER_NAMES[NAMES_COUNT] {"5,7×28mm", ".500 S&W Mag", ".45 ACP", "9x19mm", "9x19mm"};
const std::string SWORD_NAMES[NAMES_COUNT] {"Оркрист", "Жало", "Нарсил", "Херугрим", "Хедхафанг"};
const std::string STEEL_NAMES[NAMES_COUNT] {"09Г2С", "DX51D", "30MnB5", "08Х18Н10Т", "С345-09Г2С"};

Pistol* generate_pistol(){
    int pistol = rand() % NAMES_COUNT;
    return new Pistol(
        PISTOL_NAMES[pistol],
        (double)rand() / RAND_MAX * 100,
        (double)rand() / RAND_MAX * 1000,
        rand() % 20,
        CALIBER_NAMES[pistol]
    );
};

Sword* generate_sword(){
    return new Sword(
        SWORD_NAMES[rand() % NAMES_COUNT],
        (double)rand() / RAND_MAX * 1000,
        STEEL_NAMES[rand() % NAMES_COUNT],
        (double)rand() / RAND_MAX * 2
    );
};

int main(){
    const int N = 10;
    Weapon* weapons[N];
    void* void_weapons[N];

    for (int i = 0; i < N; i++) {
        if (rand() % 2 == 0){
            weapons[i] = generate_pistol();
            void_weapons[i] = (void*)weapons[i];
        } else {
            weapons[i] = generate_sword();
            void_weapons[i] = (void*)weapons[i];
        }
    }

    cout << "--|-- Без приведения указателя --|--\n" << endl;

    for(int i = 0; i < N; i++){
        weapons[i]->printCharacteristics();
        // void_weapons[i].printCharacteristics(); // error: request for member 'printCharacteristics' in 'void_weapons[i]', which is of non-class type 'void*'
        // weapons[i]->strike(); // error: 'class Weapon' has no member named 'strike'
        // weapons[i]->shotByDistance((double)rand() / RAND_MAX * 1000); // error: 'class Weapon' has no member named 'shotByDistance'; did you mean 'distance'?
    }

    cout << "\n--|-- С приведением указателя --|--\n" << endl;

    for(int i = 0; i < N; i++){
        if(weapons[i]->getType() == PISTOL){
            ((Pistol*)weapons[i])->printCharacteristics();
            cout << ((Pistol*)weapons[i])->shotByDistance((double)rand() / RAND_MAX * 1000) << endl;
        } else if (weapons[i]->getType() == SWORD){
            ((Sword*)weapons[i])->printCharacteristics();
            cout << ((Sword*)weapons[i])->strike() << endl;
        }
    }

    cout << "\n--|-- С приведением указателя из указателя на пустоту --|--\n" << endl;

    // for(int i = 0; i < N; i++){
    //     if(void_weapons[i]->getType() == PISTOL){ // error: 'void*' is not a pointer-to-object type
    //         ((Pistol*)weapons[i])->printCharacteristics();
    //         cout << ((Pistol*)weapons[i])->shotByDistance((double)rand() / RAND_MAX * 1000) << endl;
    //     } else if (void_weapons[i]->getType() == SWORD){ // error: 'void*' is not a pointer-to-object type
    //         ((Sword*)weapons[i])->printCharacteristics();
    //         cout << ((Sword*)weapons[i])->strike() << endl;
    //     }
    // }

    for(int i = 0; i < N; i++){
        if(((Weapon*)void_weapons[i])->getType() == PISTOL){
            ((Pistol*)weapons[i])->printCharacteristics();
            cout << ((Pistol*)weapons[i])->shotByDistance((double)rand() / RAND_MAX * 1000) << endl;
        } else if (((Weapon*)void_weapons[i])->getType() == SWORD){ // error: 'void*' is not a pointer-to-object type
            ((Sword*)weapons[i])->printCharacteristics();
            cout << ((Sword*)weapons[i])->strike() << endl;
        }
    }

    for (int i = 0; i < N; i++) {
        delete weapons[i];
    }

    cout << "\n--|-- Ошибка приведение не к тому типу --|--\n" << endl;

    // void* test;
    // test = new NotWeaponWithoutError();
    // ((Weapon*)test)->printCharacteristics(); // type: -1414812816; name: (неизвестное количество пробелов)
    // delete test; // warning: deleting 'void*' is undefined [-Wdelete-incomplete]
    // test = new NotWeaponWithError();
    // ((Weapon*)test)->printCharacteristics(); // type: -1414812816; name: (неизвестное количество пробелов)
    // delete test; // warning: deleting 'void*' is undefined [-Wdelete-incomplete]
    // test = new NotWeaponWithoutError();
    // ((Weapon*)test)->distance = 1.;  // Segmentation Fault
    // delete test;
    return 0;
}
