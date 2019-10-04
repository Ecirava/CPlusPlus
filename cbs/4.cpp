///switch case คล้ายๆกับ if-else
#include <iostream>
using namespace std;
void demo_switch() {
    cout << "1. kid" << endl;
    cout << "2. adult" << endl;
    cout << "3. senior" << endl;
    cout << "select a choice. ";
    int fare; // undefined behavior
    char choice;
    cin >> choice;
    switch (tolower(choice)) {
        case '1': case 'k': case '3': case 's':
            fare = 10;
            cout << "kid or senior" << endl;
            break;
        case '2': case 'a':
            fare = 20;
            cout << "adult" << endl;
            break;
        default:
            fare = 20;
            cout << "default fare rate" << endl;
            break;  }
    cout << "fare = " << fare << endl;  }

int main() {
    demo_switch();
    return 0;
}
