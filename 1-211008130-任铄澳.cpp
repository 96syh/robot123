#include <iostream>
#include <cmath>
using namespace std;
#define renshuoao 3.14
void xz(double* x, double* y, double theta, double a, double b) {
    double c = *x;
    double d = *y;
    double e;
    double f;
    e = cos(theta) * c - sin(theta) * d + cos(theta) * a - sin(theta) * b - a;
    f = sin(theta) * c + cos(theta) * d + sin(theta) * a + cos(theta) * b - b;
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
    double theta = renshuoao;
    theta = theta / 6;
    xz(&x, &y, theta, a, b);
    xz(&x1, &y1, theta, a, b);
    xz(&x2, &y2, theta, a, b);
    cout << "renshuoao" "Point 1: (" << x << ", " << y << ")" << endl;
    cout << "renshuoao" "Point 2: (" << x1 << ", " << y1 << ")" << endl;
    cout << "renshuoao" "Point 3: (" << x2 << ", " << y2 << ")" << endl;
    cout << "renshuoao" "Qµã: (" << a << ", " << b << ")" << endl;
    return 0;
}