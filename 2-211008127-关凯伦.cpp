#include <iostream>
#include <corecrt_math.h>
using namespace std;
#define GKL 3.14

void xuanzuanshu(double* x, double* y, double a, double b, double k, double* resultx, double* resulty) {
    double h;
    double theta = GKL;
    h = atan(k);
    theta = GKL / 2 - atan(k);
    for (int i = 0; i < 3; i++) {
        resultx[i] = cos(theta) * x[i] - sin(theta) * y[i] + a;
        resulty[i] = sin(theta) * x[i] + cos(theta) * y[i] + b;
    }
}
int main() {
    double x[3] = { 0 };
    x[0] = 10;
    x[2] = 20;
    x[1] = 30;
    double y[3] = { 0 };
    y[1] = 10;
    y[0] = 10;
    y[2] = 25;
    double a = 0;
    double b = 1;
    double k = 2;
    double resultx[3] = { 0 };
    double resulty[3] = { 0 };
    xuanzuanshu(x, y, a, b, k, resultx, resulty);
    for (int i = 0; i < 3; i++) {

        cout << "GKL" << resultx[i] << endl;
        cout << "GKL" << resulty[i] << endl;
    }
    return 0;

}