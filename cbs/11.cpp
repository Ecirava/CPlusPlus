//iterator with vector

#include <iostream>
#include <vector>
#include <algorithm> // เพื่อ find

using namespace std;

int findIndex(vector<string> v, string s) {
    auto itr = find(v.begin(), v.end(), s);
    return itr != v.end() ? distance(v.begin(), itr) : -1;
}

void demo() {
    vector<string> stations = {
            "HUA", "SAM", "SIL", "LUM", "KHO",
            "SIR", "SUK", "PET", "RAM", "CUL",
            "HUI", "SUT", "RAT", "LAT", "PHA",
            "CHA", "KAM", "BAN"
    };
    string fromStation,toStation;
    cout << "enter from station to station: ex. SAM PET ";
    cin >> fromStation >> toStation;
    cout << findIndex(stations, fromStation) << endl;
    cout << findIndex(stations, toStation) << endl;
    auto fromIdx = findIndex(stations, fromStation);
    auto toIdx = findIndex(stations, toStation);
    if (fromIdx != -1 && toIdx != -1) {
        if (fromIdx < toIdx) {
            for (int i = fromIdx; i <= toIdx; ++i) {
                cout << *(stations.begin() + i) << " ";
//        cout << stations[i] << " ";
            }
        } else {
            for (int i = fromIdx; i >= toIdx; --i) {
                cout << *(stations.begin() + i) << " ";
            }
        }
        cout << endl;
        cout << "total stations = " << abs(fromIdx - toIdx) << endl;
    } else {
        cout << "unable to find stations." << endl;
    };
}

int main() {
    demo();
    return 0;
}
