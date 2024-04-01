#include <iostream>
#include <corecrt_math.h>
using namespace std;
#define huacheng 3.14

void shixun(double* x, double* y, double a, double b, double k, double* resultx, double* resulty) {

    double theta = huacheng;
    theta = huacheng / 2 - atan(k);
    for (int i = 0; i < 3; i++) {
        resultx[i] = cos(theta) * x[i] + sin(theta) * y[i] + cos(theta) * a + sin(theta) * b - a;
        resulty[i] = -sin(theta) * x[i] + cos(theta) * y[i] - sin(theta) * a + cos(theta) * b - b;
    }
}
int main() {
    double x[3] = { 0 };
    x[0] = 10;
    x[1] = 30;
    x[2] = 20;
    double y[3] = { 0 };
    y[0] = 10;
    y[1] = 10;
    y[2] = 25;
    double a = 1;
    double b = 1;
    double k = 2;
    double resultx[3] = { 0 };
    double resulty[3] = { 0 };
    shixun(x, y, a, b, k, resultx, resulty);
    for (int i = 0; i < 3; i++) {

        cout << "x:" << resultx[i] << endl;
        cout << "y:" << resulty[i] << endl;
    }
    return 0;

}
