///คิดเกรดเฉลี่ยจากเกรดที่พิมเข้ามากับหน่วยกิต
#include <iostream>
#include <map>
using namespace std;
int main() {
    map<string,double> G = {{"A",4},{"B+",3.5}
        ,{"B",3},{"C+",2.5},{"C",2},{"D+",1.5},{"D",1},{"F",0}};
    int s;double c; string g; //subject credit grade
    double sumcre =0 ;double sumpoint = 0;
    cout << "how many subjects? >> "; cin >> s;
    for (int i=0;i<s;i++) {
        cout << "enter credits and grade >> ";
        cin >> c >> g;
        sumcre += c;
        sumpoint += c*G[g]; }
    cout << "total credits >> " << sumcre << "\n";
    cout << "total point >> "<< sumpoint << "\n";
    cout << "GPA >> " << sumpoint/sumcre;
    return 0;
}

