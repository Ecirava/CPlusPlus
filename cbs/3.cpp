///if-else condition <ternary>
#include <iostream>
using namespace std;

int price(int age) {
    /*int perhead ;
    if (age > 10) {perhead = 299;}
    else perhead = 100; */
    int perhead = ( age > 10 ) ? 299 : 100;
    return perhead;}

double discountRate(char memberType) {
//    if (memberType == 'G') {
//        return .2;
//    } else {
//        return .1;
//    }
    return (memberType == 'G') ? .2 : .1;
}

double discountRate2(char memberType) {
//    if (memberType == 'G') {
//        return .2;
//    } else if (memberType == 'S') {
//        return .1;
//    } else if (memberType == 'B') {
//        return .05;
//    } else {
//        return 0;
//    }
    return (memberType == 'G') ? .2 : (memberType == 'S') ? .1 : (memberType == 'B') ? .05 : 0;
}

int main() {
    cout << price(4) << "\n" << price(19) << "\n";
    return 0;}
