#include <iostream>
#include <cmath>
using namespace std;
#define zhusibo 3.14
void shuzhu(double* x, double* y, double k, double a, double b, double* resultx, double* resulty) {

    double c;
    double o;

    c = atan(k);
    o = zhusibo / 2 - c;

    for (int i = 0; i < 3; i++) {
        resultx[i] = cos(o) * x[i] + sin(o) * y[i] + cos(o) * a + sin(o) * b - a;
        resulty[i] = -sin(o) * x[i] + cos(o) * y[i] - sin(o) * a + cos(o) * b - b;
    }


}
int main() {
    double x[3] = { 10, 30, 20 };
    double y[3] = { 10, 10, 25 };
    double a = 0;
    double b = 1;
    double k = 2;
    double resultx[3] = { 0 };
    double resulty[3] = { 0 };
    shuzhu(x, y, k, a, b, resultx, resulty);
    for (int i = 0; i < 3; i++) {
        cout << "ZSB" << resultx[i] << endl;
        cout << "ZSB" << resulty[i] << endl;
    }
    return 0;
}