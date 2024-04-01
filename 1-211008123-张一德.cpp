#include <iostream>
#include <cmath>

#define zhangyide123 3.14

using namespace std;

void shixun1(double* x, double* y, double a, double b, double k) {
    double c = *x;
    double d = *y;
    double e;
    double f;
    double h;
    double theta;

    h = atan(k);
    theta = zhangyide123 / 2 - h;
    e = (c)*cos(theta) + sin(theta) * (d)+(a)*cos(theta) + sin(theta) * (b)-a;
    f = -(c)*sin(theta) + cos(theta) * (d)-(a)*sin(theta) + cos(theta) * (b)-b;
    *x = e;
    *y = f;
}

int main() {
    double x = 10;
    double y = 10;
    double x1 = 30;
    double y1 = 10;
    double x2 = 20;
    double y2 = 25;
    double a = 10;
    double b = 25;
    double k = 2;

    shixun1(&x, &y, a, b, k);
    shixun1(&x1, &y1, a, b, k);
    shixun1(&x2, &y2, a, b, k);

    cout << "ZYD: (" << x << ", " << y << ")" << endl;
    cout << "ZYD: (" << x1 << ", " << y1 << ")" << endl;
    cout << "ZYD: (" << x2 << ", " << y2 << ")" << endl;

    return 0;
}