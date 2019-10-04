#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v,vector<int>::iterator a,vector<int>::iterator b) {
    //write your code only in this function
    vector<int> c1, c2, c3;
    for (auto itr = v.begin(); itr != a; itr++) {
        c1.push_back(*itr);
    }
    for (auto itr = a; itr != b; itr++) {
        c2.push_back(*itr);
    }
    for (auto itr = b; itr != v.end(); itr++) {
        c3.push_back(*itr);
    }
    v.clear();
    for (auto i : c1) {
        v.push_back(i);
    }
    for (auto itr = c2.rbegin(); itr != c2.rend(); itr++) {
        v.push_back(*itr);
    }
    for (auto i : c3) {
        v.push_back(i);
    }
}
int main() {
    //read input
    int n,a,b;
    cin >> n;
    vector<int> v;
    for (int i = 0;i < n;i++) {
        int c;
        cin >> c;
        v.push_back(c);
    }
    cin >> a >> b;
    //call function
    reverse(v,v.begin()+a,v.begin()+b+1);
    //display content of the vector
    for (auto &x : v) {
        cout << x << " ";
    }
    cout << endl;
}
