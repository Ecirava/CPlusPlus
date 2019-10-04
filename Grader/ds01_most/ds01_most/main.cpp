//
//  main.cpp
//  ds01_most
//
//  Created by Ryu Lunoz on 29/8/2562 BE.
//  Copyright © 2562 Ryu Lunoz. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;

int main() {
    // insert code here...
    int num;
    cin >> num;
    map<string, int> container;
    for (int i = 0; i < num; i++) {
        string s;
        cin >> s;
        container[s]++;
    }
    
    string mostName;
    int max = 0;
    for (auto it = container.begin(); it != container.end(); it++) {
        if (it->second >= max) {
            mostName = it->first;
            max = it->second;
        }
    }
    cout << mostName << " " << max;
}
