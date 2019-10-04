//
//  main.cpp
//  ex00e3
//
//  Created by Ryu Lunoz on 21/8/2562 BE.
//  Copyright © 2562 Ryu Lunoz. All rights reserved.
//

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    // insert code here...
    int n;int m;bool boo = false;
    cin >> n; set<int> gg;
    for (int i = 0; i < n; i++) {
        cin >> m;
        gg.insert(m);
        if (m < 1 || m >n) {
            boo = true;
            break;
        }
    }
    if (gg.size() != n || boo) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    
    return 0;
}
