#include <iostream>
#include <cmath>

#define XZQ 3.14

using namespace std;

void pingyixuanzhuan(double* x, double* y, double a, double b , double k) {
    double c = *x;
    double d = *y;
    double e;
    double f;
    double h;
    double theta;

    h = atan(k);
    theta = XZQ/2 - h;
    e = (c)*cos(theta) + sin(theta) * (d) + (a)*cos(theta) + sin(theta) * (b)-a;
    f = -(c)*sin(theta) + cos(theta) * (d) - (a)*sin(theta) + cos(theta) * (b)-b;
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

    pingyixuanzhuan(&x, &y, a, b, k );
    pingyixuanzhuan(&x1, &y1, a, b, k );
    pingyixuanzhuan(&x2, &y2, a, b, k );

    cout << "Point 1: (" << x << ", " << y << ")" << endl;
    cout << "Point 2: (" << x1 << ", " << y1 << ")" << endl;
    cout << "Point 3: (" << x2 << ", " << y2 << ")" << endl;

    return 0;
}