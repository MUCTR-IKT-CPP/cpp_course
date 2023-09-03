#include <iostream>
#include <memory>

using namespace std;


int main (){
    cout << "Hello World" << endl;
    bool b = false;
    int n = 10;
    double df = 13.24;
    char c = 'c';

    42; // Целочисленный типа int
    108.87; // С плавающей запятой типа double
    12.; // С плавающей запятой типа double
    14.2f; // С плавающей запятой типа float
    15.1L; // С плавающей запятой типа long double
    16u; // Целочисленный типа unsigned int
    15l; // Целочисленный типа long int
    true; // Логический
    's'; // Символьный
    "str"; // Строковый


    int n = 5; 
    const bool B = false;
    const int N = 10;
    const double D = N / 2.1;
    constexpr int N_2 = N * 2;
    const char C = 'c';

int sum (int a, int b)
{
	return a + b;
}

constexpr int new_sum (int a, int b)
{
	return a + b;
}

void func()
{
	constexpr int a1 = new_sum (5, 12); // ОК: constexpr-переменная
	constexpr int a2 = sum (5, 12); // ошибка: функция sum не является constexp-выражением
	int a3 = new_sum (5, 12); // ОК: функция будет вызвана на этапе компиляции
	int a4 = sum (5, 12); // ОК
}
}

