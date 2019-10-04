//
//  main.cpp
//  timeAfter
//
//  Created by Ryu Lunoz on 20/8/2562 BE.
//  Copyright © 2562 Ryu Lunoz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    int H;
    int M;
    int X;
    cin >> H >> M ;
    cin >> X;
    M += X;
    while (M >= 60) {
        if (M >= 60) {
            M -= 60;
            H += 1;
        }
        if (H >= 24) {
            H -= 24;
        }
    }
    
    if (H >= 10 && M >= 10) {
        cout << H << " " << M << endl;
    }
    else if (H < 10 && M < 10) {
        cout << "0" << H << " " << "0" << M << endl;
    }
    else if (H >= 10 && M < 10) {
        cout << H << " " << "0" << M << endl;
    }
    else if (H < 10 && M >= 10) {
        cout << "0" << H << " " << M << endl;
    }
}
