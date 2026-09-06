#include <vector>
#include <list>
#include <set>
#include <deque>

#include "base.h"

using namespace std;

const int N = 20;

int main(){
    vector<int> v = generate<int, vector<int>>(N);
    list<double> l = generate<double, list<double>>(N);
    deque<long long int> d = generate<long long int, deque<long long int>>(N, -1000000000000, 1000000000000);

    print(v);
    print(l);
    print(d);
    return 0;
}