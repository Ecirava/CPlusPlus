#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main() {
    vector<int> nums;
    int n = 10000;
    for (int i = 0; i < n; i++) {
        nums.push_back(rand() % 10000);
    }
    int k = 3000;

    //Given a number x in nums, is there a number y in nums such that x+y = k?
    //Same as
    //Given a number x in nums, is there a number k-x in nums?
    set<int> s;
    for (auto p:nums) {
        s.insert(p);
    }
    for (auto x:nums) {
        if (s.find(k-x) != s.end()) {
            int y = k-x;
            cout<<x<<" + "<<y<<" = "<<k<<endl;
            return 0;
        }
    }
    cout<<"Does not exist"<<endl;

    return 0;
}
