#include <iostream>
#include <corecrt_math.h>
using namespace std;
#define GKL 3.14

void PYXZ(double* x, double* y, double b1, double a1, double t, double x4, double y4, double x3, double y3) {
    double x1 = 0;
    double y1 = 0;
    double x2 = 0;
    double y2 = 0;
    x1 = *x;
    y1 = *y;
    x2 = cos(t) * x1 - sin(t) * y1 + a1 * sin(t) - b1 * sin(t) - a1;
    y2 = sin(t) * x1 + cos(t) * y1 + a1 * sin(t) + b1 * cos(t) - b1;
    *x = x2;
    *y = y2;
}
int main() {
    double x = 0;
    double y = 0;

    double x4 = 0;
    double y4 = 0;

    double x3 = 0;
    double y3 = 0;

    double a1 = 0;
    double b1 = 0;
    x = 10;
    y = 10;
    x4 = 30;
    y4 = 10;
    x3 = 20;
    y3 = 25;
    a1 = 10;
    b1 = 25;
    double t = GKL / 6;
    PYXZ(&x, &y, a1, b1, t, x3, y3, x4, y4);

    cout << "GKL:" << "(" << x << ", " << y << ")" << endl;
    PYXZ(&x3, &y3, a1, b1, t, x3, y3, x4, y4);

    cout << "GKL:" << "(" << x3 << ", " << y3 << ")" << endl;
    PYXZ(&x4, &y4, a1, b1, t, x3, y3, x4, y4);

    cout << "GKL:" << "(" << x4 << ", " << y4 << ")" << endl;

}