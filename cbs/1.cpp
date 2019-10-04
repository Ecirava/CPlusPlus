////distance and slope btw 2 points
#include <iostream>
#include <cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2)); }

double slope(double x1, double y1, double x2, double y2) {
    return (y1-y2)/(x1-x2);}

int main() {
    double x1, y1, x2, y2;
    cout << "enter x1 y1 x2 y2: ";
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "distance = " << distance(x1, y1, x2, y2) << endl;
    cout << "slope = " << slope(x1, y1, x2, y2) << endl;
    return 0;
}
