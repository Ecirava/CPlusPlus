//2 dimension array

#include <iostream>
#include <iomanip>
using namespace std;
void demo1() {
    //one dimension array
    int a[] = {7, 6, 8};
    int b[3] = {20, 25, 10};
    //2 dimension array
    int c[2][3]; //ตัวหลังจำเป็นต้องบอก ตัวหน้าไม่ต้องก็ได้
    c[0][0] = 7;
    c[0][1] = 6;
    c[0][2] = 8;
    c[1][0] = 20;
    c[1][1] = 25;
    c[1][2] = 10;
    int d[][3] = {
            {7,  6,  8},
            {20, 25, 10}    };
    const int totalCols = 4;
    int e[][totalCols] = {
            {7,  6,  8,  10},
            {20, 25, 10, 99}    };
    cout << sizeof(e) << endl;
    cout << sizeof(e[0]) << endl;
    cout << sizeof(e[0][0]) << endl;
    size_t rows = sizeof(e) / sizeof(e[0]);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < totalCols; ++j) {
            cout << "e[" << i << "][" << j << "] = " << setw(3) << e[i][j] << "  ";
        }
        cout << endl;
    }
}
int main() {
    demo1();
    return 0;
}
