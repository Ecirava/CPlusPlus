#include <vector>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v = A;
    bool check[100000] = {false};
    for (auto a: A) {
        check[a] = true;
    }
    for (auto b: B) {
        if (!check[b]) v.push_back(b);
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    bool check[100000] = {false};
    for (auto a: A) {
        check[a] = true;
    }
    for (auto b: B) {
        if (check[b]) v.push_back(b);
    }
    return v;
}
