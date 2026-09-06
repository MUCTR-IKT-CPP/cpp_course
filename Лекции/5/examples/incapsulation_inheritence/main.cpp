#include <iostream>
#include <string>
#include <cstdarg>

using namespace std;

class Father{
    private:
        string secret;
    protected:
        int age;
        int getAge(){
            return age;
        }
        string getSecret(){
            return secret;
        }
    public:
        string name;
        string getName(){
            return name;
        }
        void printCharacteristics(){
            cout << 
            "name: " << name << 
            "\nage: " << age << 
            "\nsecret: " << secret << endl;
        }
        Father(string name, int age, string secret): 
            name(name), age(age), secret(secret)
        {}
};

class FirstSon: public Father{
    public:
        FirstSon(string name, int age, string secret): 
            Father(name, age, secret)
        {}
        void print(){
            cout << this->age << this->getSecret() << endl; // Свойства protected у родителя доступны
        }
};

class FirstGrandSon: public FirstSon{
        public:
        FirstGrandSon(string name, int age, string secret): 
            FirstSon(name, age, secret)
        {}
        void print(){
            cout << this->age << this->getSecret() << endl; // Свойства и методы protected у дедушки доступны.
        }
};

class SecondSon: protected Father{
    public:
        SecondSon(string name, int age, string secret): 
            Father(name, age, secret)
        {}
        void print(){
            cout << this->age << this->getSecret() << endl; // Свойства protected у родителя доступны
        }
};

class SecondGrandSon: public SecondSon{
        public:
        SecondGrandSon(string name, int age, string secret): 
            SecondSon(name, age, secret)
        {}
        void print(){
            cout << this->age << this->getSecret() << endl; // Свойства и методы protected у дедушки доступны.
        }
};

class ThirdSon: private Father{
    public:
        ThirdSon(string name, int age, string secret): 
            Father(name, age, secret)
        {}
        void print(){
            cout << this->age << this->getSecret() << endl; // Свойства protected у родителя доступны
        }
};

class ThirdGrandSon: public ThirdSon{
        public:
        ThirdGrandSon(string name, int age, string secret): 
            ThirdSon(name, age, secret)
        {}
        void print(){
            cout << this->age << this->getSecret() << endl;// Свойства и методы protected у дедушки НЕ доступны.
        }
};

int main(){
    Father f("Игорь", 78, "Секрет");
    FirstSon fs("Олег", 58, "Секрет");
    FirstGrandSon fgs("Станислав", 38, "Секрет");
    SecondSon ss("Кирил", 55, "Секрет");
    SecondGrandSon sgs("Владимир", 34, "Секрет");
    ThirdSon ts("Александр", 50, "Секрет");
    ThirdGrandSon tgs("Аркадий", 25, "Секрет");

    cout << f.getName() << f.name << endl; // Свойства и методы public класса деда у объекта класса деда доступны
    cout << fs.getName() << fs.name << endl; // Свойства и методы public класса деда у объекта класса первого сына доступны
    cout << fgs.getName() << fgs.name << endl; // Свойства и методы public класса деда у объекта класса первого внука доступны
    cout << ss.getName() << ss.name << endl; // Свойства и методы public класса деда у объекта класса второго сына НЕ доступны
    cout << sgs.getName() << sgs.name << endl; // Свойства и методы public класса деда у объекта класса второго внука НЕ доступны
    cout << ts.getName() << ts.name << endl; // Свойства и методы public класса деда у объекта класса третьего сына НЕ доступны
    cout << tgs.getName() << tgs.name << endl; // Свойства и методы public класса деда у объекта класса третьего внука НЕ доступны
    return 0;
}
