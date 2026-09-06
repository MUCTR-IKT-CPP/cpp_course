#include <vector>
#include <tuple>

#include "../base/base.h"

using namespace std;

const int N = 20;

template <typename FT, typename ST>
class Pair:public pair<FT, ST>{
    public:
        Pair(const FT& a, const ST& b): pair<FT, ST>(a, b) {};
        template <typename FFT, typename FST>
        friend ostream& operator<<(ostream& out, const Pair<FFT, FST>& value);
};

template <typename FFT, typename FST>
ostream& operator<<(ostream& out, const Pair<FFT, FST>& value){
    return out << "(" << value.first << "," << value.second << ")";
}

bool equal_order(vector<Pair<int, int>> a, vector<Pair<int, int>> b){
    return std::equal(a.begin(), a.end(), b.begin(), [](const Pair<int, int>&a, const Pair<int, int>&b){
        return a.first == b.first && a.second == b.second;
    });
}

int main(){
    vector<int> v = generate<int, vector<int>>(N, 0, 10);
    vector<Pair<int, int>> v_pair;
    int i = 0;
    for(int el: v) v_pair.push_back(Pair<int, int>(el, i++));
    vector<int> v_copy = v;
    vector<Pair<int, int>> v_pair_copy = v_pair;
    print(v_copy);
    sort(v_copy.begin(), v_copy.end());
    print(v_copy);
    print(v_pair_copy);
    sort(v_pair_copy.begin(), v_pair_copy.end(), [](const Pair<int, int>& a, const Pair<int, int>& b){return a.first < b.first;});
    print(v_pair_copy);

    cout << endl;
    vector<Pair<int, int>> v_pair_s_copy = v_pair;
    print(v_pair_s_copy);
    sort(v_pair_s_copy.begin(), v_pair_s_copy.end(), [](const Pair<int, int>& a, const Pair<int, int>& b){return a.first < b.first;});
    print(v_pair_s_copy);

    cout << "equal order first(sort), second(sort): " << equal_order(v_pair_copy, v_pair_s_copy) << endl;

    cout << endl;
    vector<Pair<int, int>> v_pair_t_copy = v_pair;
    print(v_pair_t_copy);
    stable_sort(v_pair_t_copy.begin(), v_pair_t_copy.end(), [](const Pair<int, int>& a, const Pair<int, int>& b){return a.first < b.first;});
    print(v_pair_t_copy);

    cout << "equal order first(sort), third(stable_sort): " << equal_order(v_pair_copy, v_pair_t_copy) << endl;

    cout << endl;
    vector<Pair<int, int>> v_pair_f_copy = v_pair;
    print(v_pair_f_copy);
    stable_sort(v_pair_f_copy.begin(), v_pair_f_copy.end(), [](const Pair<int, int>& a, const Pair<int, int>& b){return a.first < b.first;});
    print(v_pair_f_copy);

    cout << "equal order third(stable_sort), fourth(stable_sort): " << equal_order(v_pair_t_copy, v_pair_f_copy) << endl;
    return 0;
}