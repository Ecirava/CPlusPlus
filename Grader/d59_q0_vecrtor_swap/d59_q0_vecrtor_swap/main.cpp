#include <iostream>
#include <vector>
using namespace std;
void vector_swap(vector<int> &v1,vector<int> &v2,
                 int start1, int end1,
                 int start2, int end2)
{
    vector<int> pop_v1,pop_v2;
    //  v1 = <0, 1, 2, 3, 4> and v2 = <50, 51, 52, 53, 54> s1 = 0; e1 = 2; s2 = 0; e2 = 2;
    for (int i = start1; i < end1; i++) {
        pop_v1.insert(pop_v1.begin(),v1[i]);
    }
    for (int i = start2; i < end2; i++) {
        pop_v2.insert(pop_v2.begin(),v2[i]);
    }
//    reverse(pop_v1.begin(), pop_v1.end());
//    reverse(pop_v2.begin(), pop_v2.end());
    // pop_v1 = <1, 0> and pop_v2 = <51, 50>
    
    for (auto num: pop_v2) {
        v1.insert(v1.begin()+end1, num);
    }
    for (auto num: pop_v1) {
        v2.insert(v2.begin()+end2, num);
    }
    v1.erase(v1.begin()+start1, v1.begin()+end1);
    v2.erase(v2.begin()+start2, v2.begin()+end2);
}
int main() {
    //read input
    int n,c;
    vector<int>v1,v2;
    cin >> n; //number of v1
    for (int i = 0;i < n;i++) {
        cin >> c;
        v1.push_back(c);
    }
    cin >> n; //number of v2
    for (int i = 0;i < n;i++) {
        cin >> c;
        v2.push_back(c);
    }
    int s1,e1,s2,e2; //position
    cin >> s1 >> e1 >> s2 >> e2;
    //call the function
    vector_swap(v1,v2,s1,e1,s2,e2);
    //display content of the stack
    cout << "v1 has " << v1.size() << endl;
    for (auto &x : v1) { cout << x << " "; }
    cout << endl;
    //display content of the stack
    cout << "v2 has " << v2.size() << endl;
    for (auto &x : v2) { cout << x << " "; }
    cout << endl;
}
