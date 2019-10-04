//
//  main.cpp
//  ex01e1
//
//  Created by Ryu Lunoz on 21/8/2562 BE.
//  Copyright © 2562 Ryu Lunoz. All rights reserved.
//

#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

int main() {
//     insert code here...
//    input
    int m, n , current_pos1, current_pos2;
    bool found = false;
    scanf("%d%d", &m, &n);
    int given[m], wanted[n];
    for(int i = 0; i < m; i++){
        cin >> given[i];
    }
    for(int i = 0; i < n; i++){
        cin >> wanted[i];
    }

    //sorting
    sort(given, given+m);


    //core logic
    for(int i = 0; i < n; i++){
        current_pos1 = 0;
        current_pos2 = m-1;
        found = false;

        while(current_pos1 < current_pos2){
            if((given[current_pos1] + given[current_pos2]) == wanted[i]){
                found = true;
                break;
            } else if((given[current_pos1] + given[current_pos2]) < wanted[i]){
                current_pos1 += 1;
            } else {
                current_pos2 -= 1;
            }

        }

        if(found){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
