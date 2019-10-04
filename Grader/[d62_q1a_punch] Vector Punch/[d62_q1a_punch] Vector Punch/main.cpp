#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> punch(vector<string> &v, vector<string>::iterator it,int k) {
    //write some code here
    int index = distance(v.begin(), it);
    int k_back,k_front;
    if (k > v.size() - index - 1) {
        k_back = v.size() - index - 1;
    } else k_back = k;
    if (k > index) {
        k_front = index;
    } else k_front = k;
    for (int i = 0; i <= k_back; i++) {
        v.erase(it);
    }
    for (int i = 0; i < k_front; i++) {
        v.erase(it-k_front);
    }
    return v;
    //don forget to return something
}
int main() {
    int n,j,k;
    cin >> n >> j >> k;
    vector<string> v(n);
    for (int i = 0;i < n;i++) {
        cin >> v[i];
    }
    cout << "Result after punch" << endl;
    vector<string> result = punch(v, v.begin() + j, k);
    for (auto &x : result) {
        cout << x << endl;
    }
}
