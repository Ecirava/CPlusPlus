//
//  main.cpp
//  ex00m1
//
//  Created by Ryu Lunoz on 22/8/2562 BE.
//  Copyright © 2562 Ryu Lunoz. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

void serveTime() {
    int m; int n;
    cin >> n >> m;
    int arr[n];
    // second line input
    int timeServe; int boo = false;
    for (int i = 0; i < n; i++) {
        cin >> timeServe;
        if (timeServe == 0) {
            boo =true;
        }
        arr[i] = timeServe;
    }
    int customer = m; // customer = 6
    int i = 0;
    if (boo) {
        for (int i = 0; i < m; i++) {
            cout << 0 << "\n";
        }
    } else {
        while (customer > 0) { //m = 10 i = 1
            for (int j = 0; j < n; j++) { // n = 3 j = 1
                if (customer > 0 && (i % arr[j] == 0)) {
                    cout << i << "\n";
                    customer -= 1;
                }
            }
            i++;
    
        }
    }
}

int main() {
    //serving time!
    serveTime();
    return 0;
}
