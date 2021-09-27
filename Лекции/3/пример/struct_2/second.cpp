#include <iostream>
#include <string>

using namespace std;

enum Month{
    JANUARY,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};
struct Date{
    int day;
    Month month;
    int year;
};
struct Person{
    string name;
    Date birth;
};
int main(){
    Date first_birth {1, JULY, 2000};
    Person first {"Григорий", first_birth};
    cout << &first_birth << endl; // 0x61fe00
    cout << &first.birth << endl; // 0x61fdf0
    cout << "Имя: " << first.name << endl;
    cout << "Дата рождения: " << first.birth.day << '.' << first.birth.month << '.' << first.birth.year << endl;
    // Имя: Григорий
    // Дата рождения: 1.6.2000
    Person second {"Алена", {14, DECEMBER, 1993}};
    cout << "Имя: " << second.name << endl;
    cout << "Дата рождения: " << second.birth.day << '.' << second.birth.month << '.' << second.birth.year << endl;
    // Имя: Алена
    // Дата рождения: 14.11.1993
    return 0;
}
