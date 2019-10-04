//insert,erase data from vector
//sort vector

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void printvec(vector<string> a) {
    for (auto e : a) {cout << e + " ";}
    cout << endl;
}
int main(){
    vector <string> a = {"boss","Boss","BOss","BOSs","BOSS"};
    printvec(a);
    a.pop_back();   //erase the last one
    printvec(a);
    a.push_back("p1");  //add at last
    printvec(a);
    a.insert(a.begin()+1,{"p2","p3"});   //add at index 1
    printvec(a);
    a.erase(a.begin(),a.begin()+3) ;   //eraseindex 0 to 3
    printvec(a);
    sort(a.begin(),a.end());    //sort
    printvec(a);
    sort(a.rbegin(),a.rend());  //reverse sort
    printvec(a);
    return 0;
}
