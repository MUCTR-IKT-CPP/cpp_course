#include <iostream>
#include <memory>

using namespace std;

double square(double value){
    return value * value;
}

int main (){

cout << "Текст" << "любой" << "цепочкой" << endl;
cout << "Число" << 14 << " " << 1.1f <<  endl;

    // for(
    // <тип> <название счетчика> = <значение>; 
    // <условие на сравнение счетчика>; 
    // <изменение счетчика>
    // ){
    // // Блок кода
    // }

    // const int N = 10;
    // int array[N] {10, 4, 6, 8, 3, 9, 4, 5, 9, 40};
    // int sum {0};
    // for(int i = 0; i < N; i++){
    //     sum += array[i];
    // }
    // cout << sum << endl;
    
    // while(<условие>){
    // //код, пока условие истинно будет повторно выполняться
    // }
    // do{
    // // код, важно помнить что в таком цикле обязательно выполниться хотя бы 1 раз код
    // }while(<условие>);

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

