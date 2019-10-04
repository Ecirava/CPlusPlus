#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <set>

using namespace std;

class CURating {
public:
    string subject;
    string teacher;
    int score;
};

void make_subjectMap(vector<CURating> &v, set<string> &subjectSet,
                                 map<string, int>& subjectMap) {
    
    for (auto c:v)
        subjectMap[c.subject] += c.score;
}


void make_teacherMap(vector<CURating> &v, set<string> &teacherSet,
                                 map<string, int>& teacherMap) {
    
    for (auto c:v)
        teacherMap[c.teacher] += c.score;
}

int main() {
    cout << fixed<< setprecision(2);
    
    vector<CURating> v;
    set<string> subjectSet,teacherSet;
    map<string, int> subjectCount, teacherCount;
    
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        CURating c;
        cin >> c.subject >> c.teacher >> c.score;
        v.push_back(c);
        subjectSet.insert(c.subject);
        subjectCount[c.subject] += 1;
        teacherSet.insert(c.teacher);
        teacherCount[c.teacher] += 1;
    }
    // all data collected
    map<string, int> subjectMap,teacherMap;
    make_subjectMap(v, subjectSet, subjectMap);
    make_teacherMap(v, teacherSet, teacherMap);
    
    //bring 'em out!
    for (auto itr: subjectMap) {
        cout << itr.first << " " << (itr.second+0.0)/subjectCount[itr.first] << "\n";
    }
    for (auto itr: teacherMap) {
        cout << itr.first << " " << (itr.second+0.0)/teacherCount[itr.first] << "\n";
    }
}
