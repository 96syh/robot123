#include <iostream>
#include <corecrt_math.h>
using namespace std;
#define LH 3.14

void xuanzuaner(double* x, double* y, double a, double b, double k, double* resultx, double* resulty) {

    double theta = LH;
    theta = LH / 2 - atan(k);
    for (int i = 0; i < 3; i++) {
        resultx[i] = cos(theta) * x[i] - sin(theta) * y[i] + a;
        resulty[i] = sin(theta) * x[i] + cos(theta) * y[i] + b;
    }
}
int main() {
    double x[3] = { 0 };
    double y[3] = { 0 };
    x[0] = 10;
    y[0] = 10;
    x[1] = 30;
    y[1] = 10;
    x[2] = 20;
    y[2] = 25;
    double a = 1;
    double b = 1;
    double k = 2;
    double resultx[3] = { 0 };
    double resulty[3] = { 0 };
    xuanzuaner(x, y, a, b, k, resultx, resulty);
    for (int i = 0; i < 3; i++) {

        cout << "LH" << resultx[i] << endl;
        cout << "LH" << resulty[i] << endl;
    }
    return 0;

}
