#include <iostream>
#include <memory>

using namespace std;

// double square(double value){
//         return value * value;
// }

// void function(int a){
//     cout << a << endl;
// }

// void add(int* to, int from){
//     *to += from;
// }

// void print_array(int* array, const int N){
//     for(int i = 0; i < N; i++){
//       cout << array[i] << ' ';
//     }
//     cout << endl;
// }

// void test_function(const int* n, int * const m){
//    // Блок кода
// }

void counted_function(){
    static int counter = 0; 
    cout << ++counter << endl;
   // Блок кода
}

    // void add(int& to, int from){
    //     to += from;
    // }


int main (){
    cout << "Hello World" << endl;

//     bool b = false;
//     int n = 10;
//     double df = 13.24;
//     char c = 'c';

// 42; // Целочисленный типа int
// 108.87; // С плавающей запятой типа double
// 12.; // С плавающей запятой типа double
// 14.2f; // С плавающей запятой типа float
// 15.1L; // С плавающей запятой типа long double
// 16u; // Целочисленный типа unsigned int
// 15l; // Целочисленный типа long int
// true; // Логический
// 's'; // Символьный
// "str"; // Строковый


    // int n = 5; 
    // const bool B = false;
    // const int N = 10;
    // const double D = N / 2.1;
    // constexpr int N_2 = N * 2;
    // const char C = 'c';

    // int top = 10;
    // cout << top << endl; // выведет 10
    // {
    //   double top = 20.f;
    //   cout << top << endl; // выведет 20
    // }
    // {
    //   char top = 't';
    //   cout << top << endl; // выведет t
    // }
    // cout << top << endl; // выведет снова 10
    // {
    //     // Code block
    // }

    // bool b = true;
    // bool c = true;
    // if(b){
    //     cout << "in if" << endl;
    // }else if(c){
    //     cout << "in else if" << endl; // даже при том условие истинное
    // }else{
    //     cout << "in else" << endl;
    // }

    // char top_direction = 't';
    // // int x = 0;
    // // int y = 2;
    // char direction = 't';

    // switch(direction){
    //     case top_direction:
    //         cout << "To top direction" << endl;
    //         break;
    //     default:
    //         cout << "Undefined direction" << endl;
    //         break;
    // }
    // const int N = 10;
    // int array[N] {10, 4, 6, 8, 3, 9, 4, 5, 9, 40};
    // int sum {0};
    // for(int i = 0; i < N; i++){
    //     sum += array[i];
    // }
    // cout << sum << endl;
    

    // double a = -10;
    // double b = 10;
    // double x = a;
    // double y = square(x);
    // double y_o = 0;
    // while (y - y_o > 0.001){
    //     y_o = y;
    //     x = (a + b) / 2;
    //     if(square(a) * square(x) < 0){
    //         b = x;
    //     }else{
    //         a = x;
    //     }
    //     y = square(x);
    // }
    // cout << x << endl;
    // int mass[4] {3, 5, 13, 1};
    // print_array(mass, 4); // 3 5 13 1

    // int k = 256;
    // int* p = mass;
    // int * p2 = &mass[0];
    // void *p3 = mass;
    // cout << mass[1] << endl;  
    // cout << &mass << endl; 
    // cout << &mass[0] << endl; 
    // cout << p << endl; 
    // cout << *(p + sizeof(int)) << endl;
    // cout << sizeof(int) << endl; 
    // cout << *(p + 1) << endl;
    // cout << *(p2 + sizeof(int)) << endl;
    // cout << *(int*)(p3 + sizeof(int)) << endl;

    
    // cout << *mass + 10 << endl;
    // cout << mass[0] + 10 << endl; 
    // cout << *(p + 1) + 10 << endl; 
    // *(p + 1) = 11;
    // cout << mass[1] << endl;

    // int * p4 = new int;
    // *p4 = 1;
    // cout << *p4 << endl;
    // delete p4;
    // cout << *p4 << endl;


    // int* new_int = new int;
    // float* new_float = new float;
    // void* new_void = new char;
    // delete new_int;
    // delete new_float;
    // delete new_void;

    // int N = 10;
    // int* new_array = new int[N];
    // int** new_2D_array = new int*[N];
    // for(int i = 0; i < N; i++)
    //     new_2D_array[i] = new int[N];
    // for(int i = 0; i < N; i++)
    //     delete new_2D_array[i];
    // delete[] new_2D_array;
    // delete[] new_array;

    // int buffer[10] {1,2,3,4,5,6,7,8,9,0};
    // int* p_buffer = buffer;
    // void* p_void_buffer = buffer;
    // cout << *p_buffer << endl;
    // cout << *((int*)p_void_buffer) << " -> " 
    //         << sizeof(*((int*)p_void_buffer)) << endl;
    // // 1 -> 4
    // cout << *((long long*)p_void_buffer) << " -> " 
    //         << sizeof(*((long long*)p_void_buffer)) << endl;
    // // 8589934593 -> 8
    // cout << *((char*)p_void_buffer) << " -> " 
    //         << sizeof(*((char*)p_void_buffer)) << endl;
    // // -> 1
    // cout << *((bool*)p_void_buffer) << " -> " 
    //         << sizeof(*((bool*)p_void_buffer)) << endl;
    // // 1 -> 1
    // cout << *((double*)p_void_buffer) << " -> " 
    //         << sizeof(*((double*)p_void_buffer)) << endl;
    // // 4.24399e-314 -> 8


    // int from = 10;
    // int to = 4;
    // add(&to, from);
    // cout << to << endl; // 14

    // int n = 10;
    // const int N = 15;
    // int m = 21;
    // const int* p = &n;
    // int * const pc = &n;
    // int * cp = &N; // Ошибка, не дает присвоить константу к указателю позволяющему изменять значение
    // (*p) = 12; // Ошибка, не дает присвоить новое значение
    // p = &m;
    // (*pc) = 13;
    // pc = &m; // Ошибка, не дает присвоить новый указатель
    // int* n = new int(10);
    // *n = 10;
    // int m {20};
    // test_function(n, n); // Ошибка, использовать переменную тип int* нельзя для инициализации ссылки
    // test_function(&m, m); // 0x61fe14        20      0x61fe14        20
    // test_function(n, m); // 0xe84330        10      0x61fe14        20
    // test_function(&m, n); // Ошибка, использовать переменную тип int* нельзя для инициализации ссылки
    // test_function(&m, *n); // 0x61fe14        20      0xe84330        10

    // unique_ptr<int> x_up(new int(10));
    // unique_ptr<int> y_up;
    // // y_u_prt = x_u_prt; // Ошибка компиляции
    // // unique_ptr<int> z_u_prt(x_u_prt); // Ошибка компиляции
    // int* classic_p = x_up.get(); // Превращение в обычный указатель
    // y_up = std::move(x_up); // Передача указателя другому
    // y_up.reset(); // Сброс указателя
    // // unique_ptr<int> c_up(classic_p);
    // // delete classic_p;
    // shared_ptr<int> x_sp(new int(42));
    // shared_ptr<int> y_sp(new int(13));
    // y_sp= x_sp; // вызовет удаление объекта с числом 13, и оба указателя будут ссылаться на число 42
    // static int a = 10;
    // int array[10] {0};
    // int* parray = array;
    // cout << array << endl;
    // cout << parray << endl;
    // cout << &parray << endl;
    // cout << &array[0] << endl;
    // cout << &array << endl;



    // int from = 10;
    // int to = 4;
    // add(to, from);
    // cout << to << endl; // 14
    for(int i = 0; i < 10; i++)
        if(i % 3 != 0)
            counted_function();
    return 0;
}

