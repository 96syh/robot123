#include <iostream>
#include <cmath>
#define niumengen 3.14

using namespace std;

void px(double* x, double* y, double a, double b, double k) {
    double c = *x;
    double d = *y;
    double e;
    double f;
    double h;
    double theta;
    k = 2;
    h = atan(k);
    theta = niumengen / 2 - h;
    e = (c)*cos(theta) + sin(theta) * (d)+(a)*cos(theta) + sin(theta) * (b)-a;
    f = -(c)*sin(theta) + cos(theta) * (d)-(a)*sin(theta) + cos(theta) * (b)-b;
    *x = e;
    *y = f;
}

int main() {
    double x = 10;
    double y = 10;
    double a = 10;
    double b = 25;
    double x1 = 30;
    double y1 = 10;
    double x2 = 20;
    double y2 = 25;
    double k = 2;
    double theta = niumengen;
    theta = theta / 6;

    px(&x, &y, a, b, k);
    px(&x1, &y1, a, b, k);
    px(&x2, &y2, a, b, k);

    cout << "Å£ÃÎ¶÷" << "Point 1: (" << x << ", " << y << ")" << endl;
    cout << "Å£ÃÎ¶÷" << "Point 2: (" << x1 << ", " << y1 << ")" << endl;
    cout << "Å£ÃÎ¶÷" << "Point 3: (" << x2 << ", " << y2 << ")" << endl;

    return 0;
}