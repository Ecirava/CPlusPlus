//
//  main.cpp
//  dq0_histogram
//
//  Created by Ryu Lunoz on 5/9/2562 BE.
//  Copyright © 2562 Ryu Lunoz. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;
    map<string, int> m;
    string s;
    for (int i = 0; i < N; i++) {
        cin >> s;
        m[s] += 1;
    }
    for (auto itr: m) {
        if (itr.second > 1) {
            cout << itr.first << " " << itr.second << "\n";
        }
    }
}
