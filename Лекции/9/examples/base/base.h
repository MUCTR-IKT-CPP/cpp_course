#ifndef BASE_H
#define BASE_H

#include <iostream>
#include <algorithm>
#include <random>
#include <iomanip>
#include <chrono>

template <class Container>
void print(const Container& v){
    const int VN = v.size();
    int i = 0;
    std::string name = __PRETTY_FUNCTION__;
    name = name.substr(name.find_last_of("::") + 1, name.find("]") - 1);
    std::cout << name <<"[" << VN << "]{";
    std::for_each(
        v.begin(), 
        v.end(),
        [&i, &VN](auto& el){
            std::cout << el << ((i++ != VN - 1) ? ", ": "}");
        }
    );
    std::cout << std::endl;
}

template <typename Type, class Container>
Container generate(
    const int& N, 
    const Type& left = std::is_floating_point<Type>::value ? -1.: -100, 
    const Type& right = std::is_floating_point<Type>::value ? 1.: 100
){
    std::random_device r;
    std::mt19937 engine(
        r() ^ std::chrono::duration_cast<std::chrono::seconds>(
            std::chrono::system_clock::now().time_since_epoch()
        ).count()
    );
    Container container;
    if constexpr (std::is_floating_point<Type>::value){
        std::uniform_real_distribution<Type> dist(left, right);
        for(int i = 0; i < N; i++) container.push_back(dist(engine));
    } else {
        std::uniform_int_distribution<Type> dist(left, right);
        for(int i = 0; i < N; i++) container.push_back(dist(engine));
    }
    return container;
}


#endif