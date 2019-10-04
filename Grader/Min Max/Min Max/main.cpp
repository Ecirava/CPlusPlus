//
//  main.cpp
//  Min Max
//
//  Created by Ryu Lunoz on 20/8/2562 BE.
//  Copyright © 2562 Ryu Lunoz. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    int n; int m; int r;
    cin >> n >> m;
    cin >> r;
    int arr[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    
    for (int i = 0; i < r; ++i) {
        int r1; int c1; int r2; int c2;
        cin >> r1 >> c1 >> r2 >> c2;
        r1-=1; c1-=1; r2-=1; c2-=1;
        
        if (r1 > r2 || c1 > c2) {
            cout << "INVALID" << endl;
        }
        else if ((r1 < 0 || r1 > n-1||c1 < 0 || c1 > m-1)&&(r2 < 0 || r2 > n-1||c2 < 0 || c2 > m-1)) {
            cout << "OUTSIDE" << endl;
        } else {
            int maxx = arr[r1][c1];
            
            if (r2 > n) {
                r2 = n-1;
            }
            if (c2 > m) {
                c2 = m-1;
            }
            for (int i = r1; i <= r2 ; i++)
                for (int j = c1; j <= c2; j++) {
                    if (arr[i][j] > maxx) {
                        maxx = arr[i][j];
                    }
                }
            cout << maxx << endl;
        }
    }
    return 0;
}
