#include <iostream>
#include <cmath>
#define niumengen 3.14

using namespace std;

void px(double* x, double* y, double theta, double a, double b) {
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
    double x = 20;
    double y = 25;
    double a = 10;
    double b = 25;
    double theta = niumengen;
    theta = theta / 6;
    px(&x, &y, theta, a, b);
    cout << "Å£ÃÎ¶÷" << x << endl;
    cout << "Å£ÃÎ¶÷" << y << endl;
    cout << "Å£ÃÎ¶÷" << a << endl;
    cout << "Å£ÃÎ¶÷" << b << endl;

    return 0;
}