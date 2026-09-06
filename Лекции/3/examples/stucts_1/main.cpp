#include <iostream>
#include <string>

using namespace std;

struct Person{
    string name;
    int day;
    int month;
    int year;
};

int main(){
    Person first;
    first.name = "Михаил";
    first.day = 10;
    first.month = 3;
    first.year = 1998;
    cout << "Имя: " << first.name << "\nДата рождения: " << first.day << '.' << first.month << '.' << first.year << endl;
    // Имя: Михаил
    // Дата рождения: 10.3.1998
    Person second {"Дмитрий", 12, 5, 1999};
    cout << "Имя: " << second.name << "\nДата рождения: " << second.day << '.' << second.month << '.' << second.year << endl;
    // Имя: Дмитрий
    // Дата рождения: 12.5.1999
    return 0;
}
