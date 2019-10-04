//
//  main.cpp
//  ex00m2
//
//  Created by Ryu Lunoz on 22/8/2562 BE.
//  Copyright © 2562 Ryu Lunoz. All rights reserved.
//

#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

int main() {
    // first line
    int N, M, A;
    cin >> N >> M >> A;
    // second line
    int itemType[N];
    for (int i=0; i < N; i++) {
        cin >> itemType[i];
    }
    
    vector<map<int,int>> dic;
    map<int,set<int>> userlb;
    dic.resize(N);
    
    // the following A lines
    for (int i = 0; i < A; i++)
    {
        char action; int user, item;
        cin >> action;
        if (action == 'B') {
            int bidVal;
            cin >> user >> item >> bidVal;
            dic[item-1][user] = bidVal;
            
        } else {
            cin >> user >> item;
            dic[item-1].erase(user);
        }
    }
    
    for (int i = 0; i < N; i++)
    {
        if (itemType[i] >= dic[i].size()) {
            for (auto y:dic[i])
                userlb[y.first].insert(i+1);
        } else {
            for (int p =0;p<itemType[i];p++){
                int indexuser = 0 ;
                int max = 0;
                for (auto w:dic[i]) {
                    if ((w.second > max) || (w.second == max && w.first>indexuser)) {
                        indexuser = w.first;
                        max = w.second;
                    }
                }
                userlb[indexuser].insert(i+1);
                dic[i].erase(indexuser);
            }
        }
    }
    for (int i=0;i<M;i++) {
        if (userlb[i].size()==0) cout << "NONE" << "\n";
        else {
            for (int h : userlb[i]) cout << h << " ";
            cout << "\n";
        }
    }
    return 0;
}
