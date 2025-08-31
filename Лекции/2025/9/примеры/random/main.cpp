#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <random>
#include <iomanip>
// #include <limits>

using namespace std;

const int N = 20;

void print(vector<int>& v){
    const int VN = v.size();
    int i = 0; 
    cout << "vector[" << VN << "]{";
    for_each(
        v.begin(), 
        v.end(),
        [&i, &VN](auto& el){
            cout << el << ((i++ != VN - 1) ? ", ": "}");
        }
    );
    cout << endl;
}
void print(list<double>& l){
    const int LN = l.size();
    int i = 0; 
    cout << "list[" << LN << "]{";
    for_each(
        l.begin(), 
        l.end(), 
        [&i, &LN](auto& el){
            cout << setprecision(3) << el << ((i++ != LN - 1) ? ", ": "}");
        }
    );
    cout << endl;
}

int main(){
    vector<int> v;
    list<double> l;
    random_device r;
    mt19937 engine(r());
    uniform_int_distribution<int> ind(-100, 100);
    uniform_real_distribution<double> dnd(-1., 1.);
    for(int i = 0; i < N; i++){
        v.push_back(ind(engine));
        l.push_back(dnd(engine));
    }
    print(v);
    print(l);

    return 0;
}