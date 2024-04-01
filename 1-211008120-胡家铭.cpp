#include <iostream>
#include <corecrt_math.h>
using namespace std;
#define ������ 3.14

void xuanzhuan(double* x, double* y, double b1, double a1, double t,double x4,double y4, double x3, double y3) {
    double x1 = 0;
    double y1 = 0;
    double x2 = 0;
    double y2 = 0;
    x1 = *x;
    y1 = *y;
    x2 = cos(t) * x1 - sin(t) * y1 + a1 * sin(t) - b1 * sin(t) - a1;
    y2 = sin(t) * x1 + cos(t) * y1 + a1 * sin(t) + b1 * cos(t) - b1;
    *x=x2;
    *y=y2;
}
    int main() {
        double x = 10;
        double y= 10;

       double x4 =30;
       double y4= 10;

       double x3 =20;
       double y3= 25;

        double a1 = 10;
        double b1 = 25;
        double t = ������/6;
        xuanzhuan(&x, &y, a1, b1,t, x3,y3,x4,y4);
            cout << x << endl;
            cout << y << endl;
        xuanzhuan(&x3, &y3, a1, b1, t,x3,y3 ,x4,y4);
            cout << x3 << endl;
            cout << y3 << endl;
         xuanzhuan(&x4, &y4, a1, b1, t ,x3,y3,x4,y4);
            cout << x4 << endl;
            cout << y4 << endl;
            
     } 
