#include <iostream>
#include <cmath>
using namespace std;
#define wangxiangjing 3.14

void xuanzhuan(double *x, double *y, double theta ,double a, double b ) {
    double c = *x;
    double d = *y;
    double e;
    double f;
    e = cos(theta) * c - sin(theta) * d + cos(theta)*a - sin(theta)*b - a;
    f = sin(theta) * c + cos(theta) * d + sin(theta) * a + cos(theta) * b - b;
    *x = e;
    *y = f;
}

int main(){
    double x = 10;
    double y = 10;
    double x1 = 30;
    double y1 = 10;
    double x2 = 20;
    double y2 = 25;
    double a = 10;
    double b = 25;
    double theta = wangxiangjing;
    theta = theta / 6;
    xuanzhuan(&x, &y, theta, a ,b);
    xuanzhuan(&x1, &y1, theta, a, b);
    xuanzhuan(&x2, &y2, theta, a, b);
    cout << "Point 1: (" << x << ", " << y << ")" << endl;
    cout << "Point 2: (" << x1 << ", " << y1 << ")" << endl;
    cout << "Point 3: (" << x2 << ", " << y2 << ")" << endl;
    cout << "Qµã: (" << a <<", " << b <<")" <<endl;
    return 0;
}

