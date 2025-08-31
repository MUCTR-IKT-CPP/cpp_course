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

void printDate(Date* date){
    cout << date->day << '.' << date->month << '.' << date->year << endl;
}

void printPerson(Person& person){
    cout << "Имя: " << person.name << endl;
    cout << "Дата рождения: " << person.birth.day << '.' << person.birth.month << '.' << person.birth.year << endl;
}

Person* copyPerson(Person* from){
    return new Person {from->name, from->birth};
}

int main(){
    Date first_birth {12, MARCH, 1987};
    Person first {"Николай", first_birth};
    printPerson(first);
    // Имя: Николай
    // Дата рождения: 12.2.1987
    Person* psecond = copyPerson(&first);
    printDate(&psecond->birth); // 12.2.1987
    (*psecond).name = "Игорь"; 
    printPerson(*psecond);
    // Имя: Игорь
    // Дата рождения: 12.2.1987
    return 0;
}
